module ControlUnit(
    input [6:0] opcode,
    input [3:0] state,
    output reg pc_write_not_cond,
    output reg pc_write,
    output reg IorD,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg pc_src,
    output reg [6:0] alu_op,
    output reg [1:0] alu_srcB,
    output reg alu_srcA,
    output reg reg_write,
    output reg is_ecall
);

always @(*) begin
    if(ECALL)
        is_ecall = 1;
    else
        is_ecall = 0;
end

always @(*) begin

    {pc_write_not_cond, pc_write, IorD, mem_read, 
     mem_write, mem_to_reg, pc_src, alu_srcA, 
     reg_write} = 9'b0;
    alu_op = 7'b0;
    alu_srcB = 2'b00;

    case(state)
        // IF1-IF3
        4'b0000, 4'b0001, 4'b0010: ;

        // IF4
        4'b0011: begin
            mem_read = 1;
        end

        // ID: 레지스터 읽기 
        4'b0100: begin
            ir_write = 1;
        end

        // EX1: ALU 연산
        4'b0101: begin
        end

        // EX2
        4'b0110: begin
            alu_op = opcode;
            case(opcode)
                ARITHMETIC: begin
                    alu_srcA = 1;
                    alu_srcB = 2'b00;
                end
                ARITHMETIC_IMM, LOAD, STORE, JALR: begin
                    alu_srcA = 1;
                    alu_srcB = 2'b10;
                end
                JAL: begin
                    alu_srcA = 0;
                    alu_srcB = 2'b10;
                end
                BRANCH: begin
                    alu_srcA = 1;
                    alu_srcB = 2'b00;
                    pc_write_not_cond = 1;
                end
                default: ;
            endcase
        end

        // MEM1-MEM3
        4'b0111,4'b1000,4'b1001: ;

        // MEM4
        4'b1010: begin
            IorD = 1;
            mem_read = (opcode == LOAD);
            mem_write = (opcode == STORE);
        end

        // WB
        4'b1011: begin
            mem_to_reg = 0;
            reg_write = 1;
            alu_srcA = 0;
            alu_scrB = 2'b01;
            alu_op = opcode;
            pc_src = 0;
            pc_write = 1;
        end
    endcase
end

endmodule
