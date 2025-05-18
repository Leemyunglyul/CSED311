module DCache #(
    parameter LINE_SIZE = 16,
    parameter NUM_SETS = 16
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

    wire [23:0] tag = addr[31:8];
    wire [3:0] idx = addr[7:4];
    wire [1:0] bo = addr[3:2];

    reg [23:0] tag_bank [0:NUM_SETS-1];
    reg valid_bank [0:NUM_SETS-1];
    reg dirty_bank [0:NUM_SETS-1];
    reg [127:0] data_bank [0:NUM_SETS-1];

    reg mem_read_req;
    reg mem_write_req;
    reg [31:0] mem_addr;
    wire [127:0] mem_rdata;
    wire mem_output_valid;
    wire mem_ready; 

    reg cache_write; 
    reg [127:0] cache_in;
    reg cache_dirty;
    reg _is_ready;

    DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
        .reset(reset),
        .clk(clk),
        .is_input_valid(mem_read_req | mem_write_req),
        .addr(mem_addr),
        .mem_read(mem_read_req),
        .mem_write(mem_write_req),
        .din(data_bank[idx]),
        .is_output_valid(mem_output_valid),
        .dout(mem_rdata),
        .mem_ready(mem_ready)
    );

    assign is_ready = mem_ready;
    assign dout = data_bank[idx][(bo*32)+:32];
    assign is_hit = is_input_valid && (tag_bank[idx] == tag) && valid_bank[idx];
    assign is_output_valid = is_hit && mem_read;

    typedef enum logic [1:0] {
        IDLE, READ, ALLOCATE
    } state_t;

    reg [1:0] current_state, next_state;

    integer i;
    always @(posedge clk) begin
        if (reset) begin
            for (i=0; i<NUM_SETS; i++) begin
                valid_bank[i] <= 0;
                dirty_bank[i] <= 0;
                tag_bank[i] <= 0;
                data_bank[i] <= 0;
            end
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
            if (cache_write) begin
                data_bank[idx] <= cache_in;
                dirty_bank[idx] <= cache_dirty;
                tag_bank[idx] <= tag;
                valid_bank[idx] <= 1;
            end
        end
    end

    always @(*) begin
        next_state = current_state;
        mem_read_req = 0;
        mem_write_req = 0;
        mem_addr = 0;
        cache_in = data_bank[idx]; 
        cache_dirty = 0;
        cache_write = 0;

        case (current_state)
            IDLE: begin
                if (is_input_valid) begin
                    if (!is_hit) begin 
                        if(dirty_bank[idx] && mem_ready) begin
                            next_state = READ;
                            mem_write_req = 1;
                            mem_addr = {tag_bank[idx], idx, 4'b0};
                        end else if(mem_ready) begin
                            next_state = ALLOCATE;
                            mem_read_req = 1;
                            mem_addr = {tag, idx, 4'b0}; 
                        end
                    end
                    else if (mem_write && is_hit && mem_ready) begin
                        next_state = IDLE;
                        cache_in[(bo*32)+:32] = din; 
                        cache_dirty = 1;
                        cache_write = 1;
                    end
                end
            end
            
            READ: begin
                if (mem_ready) begin
                    next_state = ALLOCATE;
                    mem_read_req = 1;
                    mem_addr = {tag, idx, 4'b0};
                end
            end
            
            ALLOCATE: begin
                if (mem_output_valid) begin
                    cache_in = mem_rdata;
                    next_state = IDLE;
                    if (mem_write) begin
                        cache_in[(bo*32)+:32] = din;
                        cache_dirty = 1;
                    end else begin
                        cache_in = mem_rdata;
                    end
                    cache_write = 1;
                end
            end
            
            default: ;
        endcase
    end
endmodule
