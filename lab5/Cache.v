module Cache #(
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
    output reg is_ready,
    output is_output_valid,
    output [31:0] dout,
    output is_hit
);

wire [23:0] tag = addr[31:8];
wire [3:0] idx = addr[7:4];
wire [1:0] bo = addr[3:2];

reg [23:0] tag_bank [0:NUM_SETS-1];
reg valid_bank [0:NUM_SETS-1];
reg dirty_bank [0:NUM_SETS-1];
reg [127:0] data_bank [0:NUM_SETS-1];

reg mem_o_valid;

wire mem_ready;
reg mem_read_req;
reg mem_write_req;
reg [31:0] mem_addr;
wire [127:0] mem_rdata;
wire mem_output_valid;

DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),
    .is_input_valid(mem_read_req || mem_write_req),
    .addr(mem_addr),
    .mem_read(mem_read_req),
    .mem_write(mem_write_req),
    .din(data_bank[idx]),
    .is_output_valid(mem_output_valid),
    .dout(mem_rdata),
    .mem_ready(mem_ready)
);

assign dout = data_bank[idx][(bo*32)+:32];
assign is_output_valid = is_hit && mem_read;
assign is_hit = is_input_valid && (tag_bank[idx] == tag) && valid_bank[idx];

typedef enum logic [2:0] {
    IDLE,           // 0: 준비 상태
    CHECK_MEM,      // 1: 메모리 준비 확인
    WRITE_BACK,     // 2: 데이터 쓰기 백
    ALLOCATE,       // 3: 새 데이터 할당
    UPDATE_DIRTY    // 4: 부분 쓰기 처리
} state_t;

reg [2:0] current_state, next_state;

integer i;
always @(posedge clk) begin
    if (reset) begin
        for (i=0; i<NUM_SETS; i++) begin
            valid_bank[i] <= 0;
            dirty_bank[i] <= 0;
            tag_bank[i] <= 0;
            data_bank[i] <= 0;
        end
        is_ready <= 1;
        current_state <= IDLE;
        mem_o_valid <= 0;
    end else begin
        current_state <= next_state;
        mem_o_valid <= mem_output_valid;
    end
end

always @(*) begin
    case (current_state)
        IDLE: begin
            if (is_input_valid) begin
                if (mem_read && !is_hit)      next_state = CHECK_MEM;
                else if (mem_write && !is_hit)next_state = CHECK_MEM;
                else if (mem_write && is_hit) next_state = UPDATE_DIRTY;
                else                          next_state = IDLE;
            end else next_state = IDLE;
        end
        
        CHECK_MEM: begin
            if (mem_ready) begin
                if (dirty_bank[idx] && (mem_read || mem_write)) 
                    next_state = WRITE_BACK;
                else begin
                    next_state = ALLOCATE;
                end
            end
            else next_state = CHECK_MEM;
        end
        
        WRITE_BACK: begin
            next_state = ALLOCATE;
        end
        
        ALLOCATE: begin
            next_state = IDLE;
        end
        
        UPDATE_DIRTY: begin
            next_state = IDLE;
        end
        
        default: next_state = IDLE;
    endcase
end

always @(posedge clk) begin
    case (current_state)
        IDLE: begin
            is_ready <= 1;
            mem_read_req <= 0;
            mem_write_req <= 0;
        end
        
        CHECK_MEM: begin
            is_ready <= 0;
            if (mem_ready) begin
                if (dirty_bank[idx]) begin
                    mem_write_req <= 1;
                    mem_addr <= {tag_bank[idx], idx, 4'b0};
                end
            end
        end
        
        WRITE_BACK: begin
            mem_write_req <= 0;
            mem_read_req <= 1;
            mem_addr <= {tag, idx, 4'b0};
        end
        
        ALLOCATE: begin
            if (mem_o_valid) begin
                mem_read_req <= 0;
                data_bank[idx] <= mem_rdata;
                tag_bank[idx] <= tag;
                valid_bank[idx] <= 1;
                dirty_bank[idx] <= 0;
                if(mem_write) begin
                    data_bank[idx][(bo*32)+:32] <= din;
                    dirty_bank[idx] <= 1;
                end
                is_ready <= 1;
            end
        end
        
        UPDATE_DIRTY: begin
            data_bank[idx][(bo*32)+:32] <= din;
            dirty_bank[idx] <= 1;
            is_ready <= 1;
        end

        default: ;
    endcase
end

endmodule
