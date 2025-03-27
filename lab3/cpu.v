// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

// The constants below are from riscv spec
// Please do not change the values

`include "opcodes.v"

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [31:0] current_pc, next_pc;

  wire [4:0] rs1 = IR[19:15];
  wire [4:0] rs2 = IR[24:20];
  wire [4:0] rd = IR[11:7];
  wire [31:0] wb_data;

  wire [31:0] addr;

  wire [3:0] alu_control;

  wire [6:0] opcode = IR[6:0];

  wire pc_src, pc_write_not_cond, pc_write, change_pc, reg_write, IorD;
  wire mem_read, mem_write, ir_write, alu_srcA, mem_to_reg;
  wire is_ecall;
  wire [1:0] alu_srcB;
  wire [6:0] alu_op;

  wire [3:0] state;

  wire [31:0] mem_data;
  wire [31:0] imm_value;

  wire [31:0] alu_result;
  wire alu_bcond;

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.
  reg [31:0] alu_in_1, alu_in_2;

  assign next_pc = pc_src ? ALUOut : alu_result;
  assign change_pc = (alu_bcond & pc_write_not_cond) | pc_write;
  assign wb_data = mem_to_reg ? MDR : ALUOut;
  assign addr = IorD ? ALUOut : current_pc;

  assign is_halted = is_ecall && (print_reg[17] == 32'd10);

  assign alu_in_1 = alu_srcA ? A : current_pc;
  
  always @(*) begin
    case(alu_srcB)
        2'b00: alu_in_2 = B; 
        2'b01: alu_in_2 = 32'h4; 
        2'b10: alu_in_2 = imm_value; 
        default: alu_in_2 = 0;
    endcase
  end

  always @(posedge clk) begin
    if (ir_write) IR <= mem_data;
  end


  always @(posedge clk) begin
    MDR <= mem_data;
  end

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .change_pc(change_pc), // input
    .current_pc(current_pc)   // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(rs1),          // input
    .rs2(rs2),          // input
    .rd(rd),           // input
    .rd_din(wb_data),       // input
    .write_enable(reg_write),    // input
    .rs1_dout(A),     // output
    .rs2_dout(B),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(addr),         // input
    .din(B),          // input
    .mem_read(mem_read),     // input
    .mem_write(mem_write),    // input
    .dout(mem_data)          // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .opcode(opcode),  // input
    .state(state),     // input
    .pc_write_not_cond(pc_write_not_cond),  // output
    .pc_write(pc_write),      // output
    .IorD(IorD),       // output
    .mem_read(mem_read),      // output
    .mem_write(mem_write),     // output
    .mem_to_reg(mem_to_reg),    // output
    .ir_write(ir_write),
    .pc_src(pc_src),  // output
    .alu_op(alu_op),      // output
    .alu_srcB(alu_srcB),     // output
    .alu_srcA(alu_srcA),     // output
    .reg_write(reg_write),   // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(IR),  // input
    .imm_gen_out(imm_value)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit(
    .opcode(alu_op),    // input
    .funct3(IR[14:12]), // input
    .funct7(IR[30]), // input
    .alu_op(alu_control)         // output
  );

  // ---------- ALU ----------
  alu alu(
    .alu_op(alu_control),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

  change_state state_counter(
    .clk(clk),
    .opcode(opcode),
    .state(state)
  );

endmodule
