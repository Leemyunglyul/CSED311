module alu_src2(
    input wire [1:0] alu_srcB,
    input wire pc_write_cond,
    input wire [31:0] ALUOut,
    output wire [1:0] result
    );
    reg [1:0] result_reg;
    reg [1:0] a;
    always @(*)begin
        if(ALUOut != 0)begin
            a = 2'b01;
        end
        else begin
            a = 2'b00;
        end
    end

    assign result = result_reg;
    
    always @(*)begin
        if(pc_write_cond)begin
            result_reg = a + 1;
        end
        else begin
            result_reg = alu_srcB;
        end
    end
    
endmodule
