// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [31:0] current_pc;

  wire [4:0] rs1 = IR[19:15];
  wire [4:0] rs2 = IR[24:20];
  wire [4:0] rd = IR[11:7];
  wire [31:0] rs1_dout, rs2_dout;
  wire [6:0] opcode = IR[6:0];

  wire [31:0] alu_result;

  wire pc_write, addr_src, mem_write, ir_write, reg_write;
  wire [1:0] alu_srcA, alu_srcB, result_src;
  wire [3:0] alu_control;

  wire [31:0] result, imm_value, mem_data, alu_in_1, alu_in_2;

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.
  reg [31:0] PC_out;

  always @(posedge clk) begin
    if(reset) begin
      IR <= 0;
      MDR <= 0;
      PC_out <= 0;
      A <= 0;
      B <= 0;
      ALUOut <= 0;
    end
    else begin
      if(ir_write) IR <= mem_data;
      MDR <= mem_data;
      PC_out <= PC;
      A <= rs1_dout;
      B <= rs2_dout;
      ALUOut <= alu_result;
    end 
  end 

  always @(*) begin
    case(alu_srcA)
      0: alu_in_1 = current_pc;
      1: alu_in_1 = PC_out;
      2: alu_in_1 = A;
      default: alu_in_1 = 0;
    endcase
  end

  always @(*) begin
    case(alu_srcB)
      0: alu_in_2 = B;
      1: alu_in_2 = imm_value;
      2: alu_in_2 = 4;
      default: alu_in_2 = 0;
    endcase
  end

  always @(*) begin
    case(result_src)
      0: result = ALUOut;
      1: result = MDR;
      2: result = alu_result;
      default: result = 0;
    endcase
  end

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(result),     // input
    .pc_write(pc_write),
    .current_pc(current_pc)   // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(rs1),          // input
    .rs2(rs2),          // input
    .rd(rd),           // input
    .rd_din(result),       // input
    .write_enable(mem_write),    // input
    .rs1_dout(rs1_dout),     // output
    .rs2_dout(rs2_dout),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(addr_src ? result : current_pc),         // input
    .din(B),          // input
    .mem_read(mem_read),     // input
    .mem_write(mem_write),    // input
    .dout(mem_data)          // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .part_of_inst(),  // input
    .is_jal(),        // output
    .is_jalr(),       // output
    .branch(),        // output
    .mem_read(),      // output
    .mem_to_reg(),    // output
    .mem_write(),     // output
    .alu_src(),       // output
    .write_enable(),     // output
    .pc_to_reg(),     // output
    .is_ecall()       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(IR),  // input
    .imm_gen_out(imm_value)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst(),  // input
    .alu_op()         // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(alu_control),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

endmodule
