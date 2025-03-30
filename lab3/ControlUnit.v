module ControlUnit(
    input [6:0] opcode,
    input [3:0] state,
    output reg pc_write_cond,
    output reg pc_write,
    output reg IorD,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg ir_write,
    output reg pc_src,
    output reg alu_op,
    output reg [1:0] alu_srcB,
    output reg alu_srcA,
    output reg reg_write,
    output reg is_ecall
);

always @(*) begin
    is_ecall = (opcode == `ECALL);
end

always @(*) begin

    case(state)
        0: begin // IF: IR<-MEM[PC]
            IorD = 0;
            mem_read = 1;
            ir_write = 1;

            pc_write = 0;
            IorD = 0;
            pc_write_cond = 0;
            mem_write = 0;
            reg_write = 0;
        end
        1: begin // ID: A<-RF[rs1(IR)], B<-RF[rs2[IR]], ALUOut<-PC+4
            alu_srcA = 0;
            alu_srcB = 1;
            alu_op = 1;

            pc_write  = 0;
            mem_read = 0;
            mem_write = 0;
            ir_write = 0;
            reg_write = 0;
            pc_write_cond = 0;
        end
        2: begin // R-type EX: ALUOut<-A+B
            alu_srcA = 1;
            alu_srcB = 0;
            alu_op = 0;
        end 
        3: begin // R,I-type WB
            mem_to_reg = 0;
            reg_write = 1;
            alu_srcA = 0;
            alu_srcB = 1;
            alu_op = 1;
            pc_write = 1;
        end
        4: begin // I-type EX
            alu_srcA = 1;
            alu_srcB = 2;
            alu_op = 0;
        end
        5: begin // Store, Load EX: ALUout<-A+imm(IR)
            alu_srcA = 1;
            alu_srcB = 2;
            alu_op = 1;

            mem_read = 0;
            reg_write = 0;
            mem_write = 0;
            pc_write = 0;
            ir_write = 0;
            pc_write_cond = 0;
        end
        6: begin // Load MEM
            ir_write = 0;
            IorD = 1;
            mem_read = 1;
        end
        7: begin // Load WB
            mem_to_reg = 1;
            reg_write = 1;
            alu_srcA = 0;
            alu_srcB = 1;
            alu_op = 1;
            pc_write = 1;
        end 
        8: begin // Store MEM: MEM[ALUout]<-B, PC<-PC+4
            IorD = 1;
            mem_write = 1;
            alu_srcA = 0;
            alu_srcB = 1;
            alu_op = 1;
            pc_src = 0;
            pc_write = 1;
            
            mem_read = 0;
            reg_write = 0;
            ir_write = 0;
        end
        9: begin // Bxx EX
            alu_srcA = 1;
            alu_srcB = 0;
            alu_op = 0;
            pc_src = 1;
            pc_write = 1;
            pc_write_cond = 0;
        end
        10: begin // Bxx cond
            pc_write_cond = 1;
            alu_srcA = 0;
            alu_srcB = 2;
            alu_op = 1;
            pc_src = 0;
        end
        11: begin // JAL EX
            mem_to_reg = 0;
            reg_write = 1;
            alu_srcA = 0;
            alu_srcB = 2;
            alu_op = 1;
            pc_write = 1;
            pc_src = 0;
        end
        12: begin // JALR EX
            mem_to_reg = 0;
            reg_write = 1;
            alu_srcA = 1;
            alu_srcB = 2;
            alu_op = 1;
            pc_write = 1;
            pc_src = 0;
        end
        default: ;

    endcase
end

endmodule
