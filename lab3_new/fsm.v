module fsm(
    input reset,
    input clk,
    input [6:0] opcode,
    output reg is_branch,
    output reg pc_update,
    output reg reg_write,
    output reg ir_write,
    output reg [1:0] result_src,
    output reg [1:0] alu_srcB,
    output reg [1:0] alu_srcA,
    output reg addr_src,
    output reg alu_op
);

    wire [3:0] current_state, next_state;
    reg [1:0] addrctrl;

    address_select_logic address_logic(
        .opcode(opcode),
        .addrctrl(addrctrl),
        .current_state(current_state),
        .next_state(next_state)
    );

    change_state changeState(
        .clk(clk),
        .reset(reset),
        .next_state(next_state),
        .current_state(current_state)
    );


endmodule
