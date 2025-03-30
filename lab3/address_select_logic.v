module address_select_logic(
    input [6:0] opcode,
    input [1:0] addrctrl,
    input [3:0] current_state,
    output reg [3:0] next_state
);

    reg [3:0] rom1_ID;
    reg [3:0] rom2_EX;
    always @(*) begin
        case(opcode)
            `ARITHMETIC: begin
                rom1_ID = 2;
                rom2_EX = 3;
            end
            `ARITHMETIC_IMM: begin
                rom1_ID = 4;
                rom2_EX = 3;
            end
            `LOAD: begin
                rom1_ID = 9;
                rom2_EX = 10;
            end
            `STORE: begin
                rom1_ID = 9;
                rom2_EX = 12;
            end
            `BRANCH: begin
                rom1_ID = 8;
                rom2_EX = 0;
            end
            `JAL: begin
                rom1_ID = 5;
                rom2_EX = 3;
            end
            `JALR: begin
                rom1_ID = 6;
                rom2_EX = 7;
            end
            default: begin
                rom1_ID = 0;
                rom2_EX = 0;
            end
        endcase
    end

    Mux mux(
        .in1(rom1_ID),
        .in2(rom2_EX),
        .in3(current_state + 1),
        .addrctrl(addrctrl),
        .state(next_state)
    );

endmodule
