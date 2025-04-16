module ForwardingUnit (
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] EX_MEM_rd,
    input [4:0] MEM_WB_rd,
    input EX_MEM_reg_write,
    input MEM_WB_reg_write,
    output reg [1:0] forwardA,
    output reg [1:0] forwardB
);

    always @(*) begin
        if(rs1 != 0 && rs1 == EX_MEM_rd && EX_MEM_reg_write) begin
            forwardA = 2;
        end
        else if(rs1 != 0 && rs1 == MEM_WB_rd && MEM_WB_reg_write) begin
            forwardA = 1;
        end
        else begin
            forwardA = 0;
        end
    end

    always @(*) begin
        if(rs2 != 0 && rs2 == EX_MEM_rd && EX_MEM_reg_write) begin
            forwardB = 2;
        end
        else if(rs2 != 0 && rs2 == MEM_WB_rd && MEM_WB_reg_write) begin
            forwardB = 1;
        end
        else begin
            forwardB = 0;
        end
    end

endmodule
