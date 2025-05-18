module Cache #(
    parameter LINE_SIZE = 16,      // 16B = 128bit
    parameter NUM_SETS = 4,        // 4 sets
    parameter NUM_WAYS = 4         // 4-way
) (
    input reset,
    input clk,
    input is_input_valid,
    input [31:0] addr,
    input mem_read,
    input mem_write,
    input [31:0] din,
    output is_ready,
    output is_output_valid,
    output [31:0] dout,
    output is_hit
);

    // Hit ratio
    reg [31:0] total_count;
    reg [31:0] hit_count;
    reg [31:0] miss_count;

    wire hit_event = is_input_valid && is_hit; 
    wire miss_event = is_input_valid && !is_hit; 

    always @(posedge clk) begin
        if (reset) begin
            total_count <= 0;
            hit_count   <= 0;
            miss_count  <= 0;
        end else begin
            if (current_state == IDLE && is_input_valid) begin
                total_count <= total_count + 1;
                if (is_hit)
                    hit_count <= hit_count + 1;
                else
                    miss_count <= miss_count + 1;
            end
        end
    end



    // address 분할
    wire [25:0] tag = addr[31:6]; // Tag 24bit + 4-Way 2bit
    wire [1:0] idx = addr[5:4]; // 4-Set idx -> 2bit
    wire [1:0] word_offset = addr[3:2]; // 16B Cache line -> 2bit block offset

    reg [25:0] tag_bank [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg valid_bank [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg dirty_bank [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg [127:0] data_bank [0:NUM_SETS-1][0:NUM_WAYS-1];

    // LRU 우선순위 행렬 (set마다 4x4 비트, lru_matrix[set][i][j]: i가 j보다 더 최근에 사용됨)
    reg lru_matrix [0:NUM_SETS-1][0:NUM_WAYS-1][0:NUM_WAYS-1];

    reg mem_read_req;
    reg mem_write_req;
    reg [31:0] mem_addr;
    wire [127:0] mem_rdata;
    wire mem_output_valid;
    wire mem_ready;

    DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
        .reset(reset),
        .clk(clk),
        .is_input_valid(mem_read_req | mem_write_req),
        .addr(mem_addr),
        .mem_read(mem_read_req),
        .mem_write(mem_write_req),
        .din(data_bank[idx][replace_way]),
        .is_output_valid(mem_output_valid),
        .dout(mem_rdata),
        .mem_ready(mem_ready)
    );

    // Way hit
    reg [NUM_WAYS-1:0] way_hit;
    always @(*) begin
        for (integer w = 0; w < NUM_WAYS; w = w + 1) begin
            way_hit[w] = valid_bank[idx][w] && (tag_bank[idx][w] == tag);
        end
    end

    // Check hit
    assign is_hit = | way_hit; // Reduction OR: 모든 bit에 대해 OR 연산 수행.
    reg [1:0] hit_way;
    always @(*) begin
        hit_way = 0;
        for (integer i = 0; i < NUM_WAYS; i = i + 1)
            if (way_hit[i]) hit_way = i[1:0];
    end

    // LRU replacement policy
    reg [1:0] replace_way;
    always @(*) begin
        replace_way = 0;
        for (integer i = 0; i < NUM_WAYS; i = i + 1) begin
            reg is_lru;
            is_lru = 1;
            for (integer j = 0; j < NUM_WAYS; j = j + 1) begin
                if (lru_matrix[idx][i][j]) is_lru = 0;
            end
            if (is_lru) replace_way = i[1:0];
        end
    end

    // Output data Selection
    reg [127:0] selected_line;
    always @(*) begin
        selected_line = 0;
        for (integer i = 0; i < NUM_WAYS; i = i + 1)
            if (way_hit[i]) selected_line = data_bank[idx][i];
    end
    assign dout = selected_line[(word_offset * 32) +: 32];

    assign is_output_valid = is_hit && mem_read;
    assign is_ready = mem_ready; // Cache와 Memory의 준비 상태는 항상 동기화.

    // FSM states
    typedef enum logic [1:0] {
        IDLE, WRITEBACK, ALLOCATE
    } state_t;

    reg [1:0] current_state, next_state;

    reg [127:0] cache_in;
    reg cache_dirty;
    reg cache_write;
    reg [1:0] write_way;

    // Cache Write: Clock Synchronous
    integer i, j, k;
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < NUM_SETS; i = i + 1) begin
                for (j = 0; j < NUM_WAYS; j = j + 1) begin
                    valid_bank[i][j] <= 0;
                    dirty_bank[i][j] <= 0;
                    tag_bank[i][j] <= 0;
                    data_bank[i][j] <= 0;
                    for (k = 0; k < NUM_WAYS; k = k + 1)
                        lru_matrix[i][j][k] <= 0;
                end
            end
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
            if (cache_write) begin
                data_bank[idx][write_way] <= cache_in;
                dirty_bank[idx][write_way] <= cache_dirty;
                tag_bank[idx][write_way] <= tag;
                valid_bank[idx][write_way] <= 1;
                // LRU 갱신: write_way가 가장 최근 사용됨
                for (j = 0; j < NUM_WAYS; j = j + 1) begin
                    if (j[1:0] != write_way) begin
                        lru_matrix[idx][write_way][j] <= 1; // write_way가 j보다 최근에 사용됨.
                        lru_matrix[idx][j][write_way] <= 0;
                    end
                end
            end
        end
    end

    // 나머지 신호들에 대해서는 Combinational로 처리.
    always @(*) begin
        next_state = current_state;
        mem_read_req = 0;
        mem_write_req = 0;
        mem_addr = 0;
        cache_in = 0;
        cache_dirty = 0;
        cache_write = 0;
        write_way = 0;

        case (current_state)
            IDLE: begin // 들어오는 입력에 대해 확인 이후 동작.
                if (is_input_valid) begin
                    if (is_hit) begin
                        if (mem_write && mem_ready) begin // Write hit
                            next_state = IDLE;
                            cache_in = data_bank[idx][hit_way];
                            cache_in[(word_offset*32)+:32] = din;
                            cache_dirty = 1;
                            cache_write = 1;
                            write_way = hit_way;
                        end else if (mem_read) begin // Read hit: LRU 갱신이 요구됨.
                            next_state = IDLE;
                            cache_in = data_bank[idx][hit_way];
                            cache_dirty = dirty_bank[idx][hit_way];
                            cache_write = 1;
                            write_way = hit_way;
                        end
                    end else begin // Cache miss
                        // Dirty bit: 메모리에 데이터 업데이트
                        if (dirty_bank[idx][replace_way] && mem_ready) begin
                            next_state = WRITEBACK;
                            mem_write_req = 1;
                            mem_addr = {tag_bank[idx][replace_way], idx, 4'b0};
                        end else if (mem_ready) begin // No dirty bit
                            next_state = ALLOCATE;
                            mem_read_req = 1;
                            mem_addr = {tag, idx, 4'b0};
                        end
                    end
                end
            end

            // IDLE에서 Dirty bit가 있으면, 이 State있는 동안 메모리에 업데이트.
            WRITEBACK: begin 
                if (mem_ready) begin
                    next_state = ALLOCATE;
                    mem_read_req = 1;
                    mem_addr = {tag, idx, 4'b0};
                end
            end

            // Cache에 새로 쓸 Data 가져오기.
            ALLOCATE: begin
                if (mem_output_valid) begin
                    cache_in = mem_rdata;
                    cache_dirty = 0;
                    write_way = replace_way;
                    if (mem_write) begin
                        cache_in[(word_offset*32)+:32] = din;
                        cache_dirty = 1;
                    end
                    cache_write = 1;
                    next_state = IDLE;
                end
            end

            default: ;
        endcase
    end

endmodule
