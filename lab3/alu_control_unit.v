module alu_control_unit(
    input [6:0] opcode,
    input [2:0] funct3,
    input funct7,
    output reg [3:0] alu_op
);
    always @(*) begin
        case(opcode)
            ARITHMETIC: begin
                case(funct3)
                    FUNCT3_ADD: alu_op = (funct7 == 0) ? 4'b0001 : 4'b0010;
                    FUNCT3_SLL: alu_op = 4'b0011;
                    FUNCT3_XOR: alu_op = 4'b0100; 
                    FUNCT3_SRL: alu_op = 4'b0101; 
                    FUNCT3_OR: alu_op = 4'b0110;
                    FUNCT3_AND: alu_op = 4'b0111;
                    default: alu_op = 4'b0000;
                endcase
            end

            ARITHMETIC_IMM: begin
                case(funct3)
                    FUNCT3_ADD: alu_op = 4'b0001; 
                    FUNCT3_XOR: alu_op = 4'b0100;
                    FUNCT3_OR: alu_op = 4'b0110; 
                    FUNCT3_AND: alu_op = 4'b0111; 
                    FUNCT3_SLL: alu_op = 4'b0011;
                    FUNCT3_SRL: alu_op = 4'b0101; 
                    default: alu_op = 4'b0000;
                endcase
            end

            LOAD, STORE, JALR, JAL: alu_op = 4'b0001; 

            BRANCH: begin
                case(funct3)
                    FUNCT3_BEQ: alu_op = 4'b1000; 
                    FUNCT3_BNE: alu_op = 4'b1001;
                    FUNCT3_BLT: alu_op = 4'b1010;
                    FUNCT3_BGE: alu_op = 4'b1011;
                    default: alu_op = 4'b0000;
                endcase
            end

            default: alu_op = 4'b0000; 
        endcase
    end
endmodule

