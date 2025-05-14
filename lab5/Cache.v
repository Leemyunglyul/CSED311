module Cache #(
    parameter LINE_SIZE = 16,
    parameter NUM_SETS = 16,
    parameter NUM_WAYS = 1
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

wire mem_ready;
reg mem_op_en;
reg mem_read_req;
reg mem_write_req;
reg [31:0] mem_addr;
wire [127:0] mem_rdata;
wire mem_output_valid;

reg pending_write;
reg [31:0] pending_addr;
reg [127:0] pending_data;

DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),
    .is_input_valid(mem_op_en),
    .addr(pending_write ? pending_addr : mem_addr),
    .mem_read(mem_read_req),
    .mem_write(mem_write_req),
    .din(pending_write ? pending_data : data_bank[idx]),
    .is_output_valid(mem_output_valid),
    .dout(mem_rdata),
    .mem_ready(mem_ready)
);

assign dout = data_bank[idx][(bo*32)+:32];
assign is_output_valid = is_hit && mem_read;
assign is_hit = is_input_valid && (tag_bank[idx] == tag) && valid_bank[idx];
assign mem_op_en = mem_read_req | mem_write_req;

always @(posedge clk) begin
    if (reset) begin
        for (int i=0; i<NUM_SETS; i++) begin
            valid_bank[i] <= 0;
            dirty_bank[i] <= 0;
            tag_bank[i] <= 0;
            data_bank[i] <= 0;
        end
        is_ready <= 1;
        pending_write <= 0;
    end else begin
        
        if (is_ready) begin
            if (is_input_valid) begin
                if (mem_write) begin
                    if (is_hit) begin // Cache Write Hit
                        data_bank[idx][(bo*32)+:32] <= din;
                        dirty_bank[idx] <= 1;
                    end else begin // Cache Write Miss
                        if (dirty_bank[idx]) begin
                            pending_write <= 1;
                            pending_addr <= {tag_bank[idx], idx, 4'b0};
                            pending_data <= data_bank[idx];
                            
                            mem_write_req <= 1;
                        end
                        is_ready <= 0;
                    end
                end
                else if (mem_read && !is_hit) begin // Cache Read Miss
                    if (dirty_bank[idx]) begin
                        pending_write <= 1;
                        pending_addr <= {tag_bank[idx], idx, 4'b0};
                        pending_data <= data_bank[idx];
                        mem_write_req <= 1;
                    end
                    is_ready <= 0;
                    mem_read_req <= 1;  
                    mem_addr <= {tag, idx, 4'b0};
                end
            end
        end else begin
            if (pending_write) begin
                if (mem_ready) begin
                    // 쓰기 백 완료
                    pending_write <= 0;
                    dirty_bank[idx] <= 0;
                    // 새 데이터 로드 시작
                    mem_read_req <= 1;
                    mem_addr <= {tag, idx, 4'b0};
                end
            end else begin
                if (mem_output_valid) begin // 메모리 응답 확인
                    data_bank[idx] <= mem_rdata;
                    tag_bank[idx] <= tag;
                    valid_bank[idx] <= 1;
                    if (mem_write) begin
                        data_bank[idx][(bo*32)+:32] <= din;
                        dirty_bank[idx] <= 1;
                    end
                    is_ready <= 1;
                end
            end
        end
    end
end
endmodule
