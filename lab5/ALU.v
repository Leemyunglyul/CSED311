module ALU(
    input [3:0] alu_op,        
    input [31:0] alu_in_1,
    input [31:0] alu_in_2,
    output reg [31:0] alu_result,
    output reg alu_bcond
);
    wire [4:0] shamt = alu_in_2[4:0];

    always @(*) begin
        alu_result = 32'b0;

        case(alu_op)
            // Arithmetic
            4'b0001: alu_result = alu_in_1 + alu_in_2; // ADD
            4'b0010: alu_result = alu_in_1 - alu_in_2; // SUB

            // Logical
            4'b0111: alu_result = alu_in_1 & alu_in_2; // AND
            4'b0110: alu_result = alu_in_1 | alu_in_2; // OR
            4'b0100: alu_result = alu_in_1 ^ alu_in_2; // XOR

            // Shift
            4'b0011: alu_result = alu_in_1 << shamt;       // SLL(left)
            4'b0101: alu_result = alu_in_1 >> shamt;       // SRL(right-logical)

            default: alu_result = 32'b0;
        endcase

        case(alu_op)
            4'b1000: alu_bcond = (alu_in_1 == alu_in_2); // BEQ
            4'b1001: alu_bcond = (alu_in_1 != alu_in_2); // BNE
            4'b1010: alu_bcond = ($signed(alu_in_1) < $signed(alu_in_2)); // BLT
            4'b1011: alu_bcond = ($signed(alu_in_1) >= $signed(alu_in_2)); // BGE
            default: alu_bcond = 1'b0;
        endcase
    end
endmodule
