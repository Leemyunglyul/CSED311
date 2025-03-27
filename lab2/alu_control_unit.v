module alu_control_unit(
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,
    output reg [3:0] alu_op
);
    always @(*) begin
        case(opcode)
            // R-type
            7'b0110011: begin
                case(funct3)
                    3'b000: alu_op = (funct7 == 7'b0000000) ? 4'b0001 : 4'b0010; // ADD, SUB
                    3'b001: alu_op = 4'b0011; // SLL
                    3'b100: alu_op = 4'b0100; // XOR
                    3'b101: alu_op = 4'b0101; // SRL
                    3'b110: alu_op = 4'b0110; // OR
                    3'b111: alu_op = 4'b0111; // AND
                    default: alu_op = 4'b0000;
                endcase
            end

            // I-type(except LW)
            7'b0010011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0001; // ADDI
                    3'b100: alu_op = 4'b0100; // XORI
                    3'b110: alu_op = 4'b0110; // ORI
                    3'b111: alu_op = 4'b0111; // ANDI
                    3'b001: alu_op = 4'b0011; // SLLI
                    3'b101: alu_op = 4'b0101; // SRLI
                    default: alu_op = 4'b0000;
                endcase
            end

            // I-type(LW), S-type, UJ-type
            7'b0000011, 7'b0100011, 7'b1101111: alu_op = 4'b0001; // ADD

            // SB-type
            7'b1100011: begin
                case(funct3)
                    3'b000: alu_op = 4'b1000; // BEQ
                    3'b001: alu_op = 4'b1001; // BNE
                    3'b100: alu_op = 4'b1010; // BLT
                    3'b101: alu_op = 4'b1011; // BGE
                    default: alu_op = 4'b0000;
                endcase
            end

            default: alu_op = 4'b0000; 
        endcase
    end
endmodule

