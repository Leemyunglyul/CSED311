module control_unit(
    input [6:0] part_of_inst,
    output reg is_jal,
    output reg is_jalr,
    output reg branch,
    output reg mem_read,
    output reg mem_to_reg,
    output reg mem_write,
    output reg alu_src,      // 0: Read data2, 1: Imm
    output reg write_enable, // regwrite
    output reg pc_to_reg,
    output reg is_ecall
);

    always @(*) begin
        {is_jal, is_jalr, branch, mem_read, mem_to_reg, mem_write, alu_src, write_enable, pc_to_reg, is_ecall} = 10'b0;

        case(part_of_inst)
            // R-type
            7'b0110011: begin
                write_enable = 1'b1;
            end

            // I-type
            7'b0010011: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end

            // Load (LW)
            7'b0000011: begin
                mem_read = 1'b1;
                mem_to_reg = 1'b1;
                alu_src = 1'b1;
                write_enable = 1'b1;
            end

            // Store (SW)
            7'b0100011: begin
                mem_write = 1'b1;
                alu_src = 1'b1;
            end

            // SB-type
            7'b1100011: begin
                branch = 1'b1;
            end

            // JAL
            7'b1101111: begin
                is_jal = 1'b1;
                write_enable = 1'b1;
                pc_to_reg = 1'b1;
            end

            // JALR
            7'b1100111: begin
                is_jalr = 1'b1;
                write_enable = 1'b1;
                pc_to_reg = 1'b1;
                alu_src = 1'b1;
            end

            // ECALL
            7'b1110011: is_ecall = 1'b1;

            default: ;
        endcase
    end
endmodule
