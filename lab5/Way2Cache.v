module Way2Cache #(
    parameter LINE_SIZE = 16,      // 16B = 128bit
    parameter NUM_SETS = 8,        // 8 sets (256B/2/16B)
    parameter NUM_WAYS = 2         // 2-way
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

    // Address breakdown: [31:5] tag, [4:2] set index, [1:0] word offset
    wire [24:0] tag = addr[31:7];
    wire [2:0] idx = addr[6:4];
    wire [1:0] word_offset = addr[3:2];

    // 2D arrays for 2-way set-associative cache
    reg [24:0] tag_bank [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg valid_bank [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg dirty_bank [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg [127:0] data_bank [0:NUM_SETS-1][0:NUM_WAYS-1];

    // LRU 우선순위 행렬 (set마다 2x2 비트, lru_matrix[set][i][j]: i가 j보다 더 최근에 사용됨)
    reg lru_matrix [0:NUM_SETS-1][0:NUM_WAYS-1][0:NUM_WAYS-1];

    // Memory interface
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

    // Hit detection for all ways
    wire [NUM_WAYS-1:0] way_hit;
    genvar w;
    generate
        for (w = 0; w < NUM_WAYS; w = w + 1) begin : WAY_HIT_GEN
            assign way_hit[w] = valid_bank[idx][w] && (tag_bank[idx][w] == tag);
        end
    endgenerate

    // Hit signal and hit way
    assign is_hit = |way_hit;
    reg hit_way;
    always @(*) begin
        hit_way = 0;
        for (integer i = 0; i < NUM_WAYS; i = i + 1)
            if (way_hit[i]) hit_way = i[0];
    end

    // LRU 교체 대상 찾기: lru_matrix[set][w][*]가 모두 0인 way가 가장 오래 안씀
    function [0:0] get_lru_way(input [2:0] set_idx);
        integer i, j;
        reg [0:0] candidate;
        begin
            candidate = 0;
            for (i = 0; i < NUM_WAYS; i = i + 1) begin
                reg is_lru;
                is_lru = 1;
                for (j = 0; j < NUM_WAYS; j = j + 1)
                    if (lru_matrix[set_idx][i][j]) is_lru = 0;
                if (is_lru) candidate = i[0];
            end
            get_lru_way = candidate;
        end
    endfunction
    wire [0:0] replace_way = get_lru_way(idx);

    // Output data selection
    reg [127:0] selected_line;
    always @(*) begin
        selected_line = 0;
        for (integer i = 0; i < NUM_WAYS; i = i + 1)
            if (way_hit[i]) selected_line = data_bank[idx][i];
    end
    assign dout = selected_line[(word_offset * 32) +: 32];

    assign is_output_valid = is_hit && mem_read;
    assign is_ready = mem_ready;

    // FSM states
    typedef enum logic [1:0] {
        IDLE, WRITEBACK, ALLOCATE
    } state_t;

    reg [1:0] current_state, next_state;

    // Internal registers for write
    reg [127:0] cache_in;
    reg cache_dirty;
    reg cache_write;
    reg write_way;

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
                    if (j[0] != write_way) begin
                        lru_matrix[idx][write_way][j] <= 1; // write_way > j
                        lru_matrix[idx][j][write_way] <= 0; // j < write_way
                    end
                end
            end
        end
    end

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
            IDLE: begin
                if (is_input_valid) begin
                    if (is_hit) begin
                        if (mem_write && mem_ready) begin
                            next_state = IDLE;
                            cache_in = data_bank[idx][hit_way];
                            cache_in[(word_offset*32)+:32] = din;
                            cache_dirty = 1;
                            cache_write = 1;
                            write_way = hit_way;
                        end else if (mem_read && mem_ready) begin
                            // read hit 시에도 LRU 갱신 필요
                            next_state = IDLE;
                            cache_in = data_bank[idx][hit_way];
                            cache_dirty = dirty_bank[idx][hit_way];
                            cache_write = 1;
                            write_way = hit_way;
                        end
                    end else begin
                        // miss
                        if (dirty_bank[idx][replace_way] && valid_bank[idx][replace_way] && mem_ready) begin
                            next_state = WRITEBACK;
                            mem_write_req = 1;
                            mem_addr = {tag_bank[idx][replace_way], idx, 4'b0};
                        end else if (mem_ready) begin
                            next_state = ALLOCATE;
                            mem_read_req = 1;
                            mem_addr = {tag, idx, 4'b0};
                        end
                    end
                end
            end

            WRITEBACK: begin
                if (mem_ready) begin
                    next_state = ALLOCATE;
                    mem_read_req = 1;
                    mem_addr = {tag, idx, 4'b0};
                end
            end

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
