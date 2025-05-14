module ControlUnit(
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,
    output reg mem_read,
    output reg mem_to_reg,
    output reg mem_write,
    output reg reg_write,
    output reg [3:0] alu_op,
    output reg alu_src,
    output reg is_jal,
    output reg is_jalr,
    output reg is_branch,
    output reg pc_to_reg,
    output reg is_ecall
);

    always @(*) begin
        mem_read = 0;
        mem_to_reg = 0;
        mem_write = 0;
        reg_write = 0;
        alu_op = 0;
        alu_src = 0;
        is_jal = 0;
        is_jalr = 0;
        is_branch = 0;
        pc_to_reg = 0;
        is_ecall = 0;
        case(opcode)
            `ARITHMETIC: begin
                reg_write = 1;
                case(funct3)
                    `FUNCT3_ADD: alu_op = (funct7 == 0) ? 4'b0001 : 4'b0010;
                    `FUNCT3_SLL: alu_op = 4'b0011;
                    `FUNCT3_XOR: alu_op = 4'b0100; 
                    `FUNCT3_SRL: alu_op = 4'b0101; 
                    `FUNCT3_OR: alu_op = 4'b0110;
                    `FUNCT3_AND: alu_op = 4'b0111;
                    default: alu_op = 4'b0000;
                endcase
            end        
            `ARITHMETIC_IMM: begin
                reg_write = 1;
                alu_src = 1;
                case(funct3)
                    `FUNCT3_ADD: alu_op = 4'b0001; 
                    `FUNCT3_XOR: alu_op = 4'b0100;
                    `FUNCT3_OR: alu_op = 4'b0110; 
                    `FUNCT3_AND: alu_op = 4'b0111; 
                    `FUNCT3_SLL: alu_op = 4'b0011;
                    `FUNCT3_SRL: alu_op = 4'b0101; 
                    default: alu_op = 4'b0000;
                endcase
            end
            `LOAD: begin
                mem_read = 1;
                mem_to_reg = 1;
                reg_write = 1;
                alu_op = 4'b0001;
                alu_src = 1;
            end
            `STORE: begin
                mem_write = 1;
                alu_op = 4'b0001;
                alu_src = 1;
            end
            `JALR: begin
                is_jalr = 1;
                pc_to_reg = 1;
                reg_write = 1;
                alu_src = 1;
                alu_op = 4'b0001;
            end
            `JAL: begin
                is_jal = 1;
                pc_to_reg = 1;
                reg_write = 1;
            end
            `BRANCH: begin
                is_branch = 1;
                case(funct3)
                    3'b000: alu_op = 4'b1000; // BEQ
                    3'b001: alu_op = 4'b1001; // BNE
                    3'b100: alu_op = 4'b1010; // BLT
                    3'b101: alu_op = 4'b1011; // BGE
                    default: alu_op = 4'b0000;
                endcase
            end
            `ECALL: is_ecall = 1;
            default: ; 
        endcase
    end

endmodule
