module immediate_generator(
    input [31:0] part_of_inst,
    output reg [31:0] imm_gen_out
);
    wire [6:0] opcode = part_of_inst[6:0]; // opcode
    
    always @(*) begin
        case(opcode)
            // I-type, JALR, LW
            7'b0010011, 7'b1100111, 7'b0000011:
                imm_gen_out = {{20{part_of_inst[31]}}, part_of_inst[31:20]};

            // S-type(SW)
            7'b0100011: 
                imm_gen_out = {{20{part_of_inst[31]}}, part_of_inst[31:25], part_of_inst[11:7]};

            // SB-type
            7'b1100011: 
                imm_gen_out = {{19{part_of_inst[31]}}, part_of_inst[31], part_of_inst[7], part_of_inst[30:25], part_of_inst[11:8], 1'b0};

            // JAL
            7'b1101111: 
                imm_gen_out = {{11{part_of_inst[31]}}, part_of_inst[31], part_of_inst[19:12], part_of_inst[20], part_of_inst[30:21], 1'b0};

            default: imm_gen_out = 32'b0;
        endcase
    end
endmodule
