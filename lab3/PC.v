module PC(
    input reset,
    input clk,
    input [31:0] next_pc,
    input change_pc,
    output reg [31:0] current_pc
);
    always @(posedge clk) begin
        if (reset)
            current_pc <= 32'h00000000;
        else begin
            if(change_pc)
                current_pc <= next_pc;
        end
    end

endmodule
