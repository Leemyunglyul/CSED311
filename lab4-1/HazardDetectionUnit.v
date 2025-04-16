module HazardDetectionUnit (
    input [4:0] rs1,
    input [4:0] rs2,
    input [6:0] opcode,
    input [4:0] ID_EX_rd,
    input ID_EX_mem_read,
    output reg pc_write,
    output reg IF_ID_write,
    output reg ID_EX_sel
);

    always @(*) begin
        if(rs1 == ID_EX_rd && rs1 != 0 && ID_EX_mem_read && opcode != `ECALL) begin
            pc_write = 0;
            IF_ID_write = 0;
            ID_EX_sel = 1;
        end
        else if(rs2 == ID_EX_rd && rs2 != 0 && ID_EX_mem_read) begin
            if(opcode == `LOAD || opcode == `ARITHMETIC_IMM || opcode == `ECALL) begin
                pc_write = 1;
                IF_ID_write = 1;
                ID_EX_sel = 0;
            end
            else begin
                pc_write = 0;
                IF_ID_write = 0;
                ID_EX_sel = 1;
            end
        end
        else begin
            pc_write = 1;
            IF_ID_write = 1;
            ID_EX_sel = 0;
        end
    end
    
endmodule
