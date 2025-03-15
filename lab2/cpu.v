// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  /***** Wire declarations *****/
  wire [31:0] current_pc, next_pc;
  wire [31:0] instruction;

  wire [4:0] rs1 = instruction[19:15];
  wire [4:0] rs2 = instruction[24:20];
  wire [4:0] rd = instruction[11:7];
  wire [31:0] rs1_dout, rs2_dout;

  wire is_jal, is_jalr, branch, mem_read, mem_to_reg;
  wire mem_write, alu_src, reg_write_en, pc_to_reg, is_ecall;

  wire [31:0] imm_value;

  wire [3:0] alu_control;
  wire [31:0] alu_result;
  wire alu_bcond;

  wire [31:0] mem_dout;

  wire [31:0] pc_plus_4 = current_pc + 4;
  wire [31:0] branch_target = current_pc + imm_value;
  wire [31:0] jalr_target = (rs1_dout + imm_value) & 32'hfffffffe;
  wire branch_taken = branch & alu_bcond;

  // WriteBack
  wire [31:0] wb_data = pc_to_reg ? pc_plus_4 :
                        mem_to_reg ? mem_dout : alu_result;

  /*assign next_pc = (is_ecall) ? current_pc :
                is_jalr ? jalr_target : 
                (is_jal || branch_taken) ? branch_target : pc_plus_4;*/
  assign next_pc = is_jalr ? jalr_target : 
               (is_jal || branch_taken) ? branch_target : pc_plus_4;

  //assign next_pc = is_jalr ? alu_result :               (is_jal || branch_taken) ? branch_target : pc_plus_4;

  assign is_halted = is_ecall && (print_reg[17] == 32'd10);
  
  /***** Register declarations *****/

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(instruction)     // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (rs1),          // input
    .rs2 (rs2),          // input
    .rd (rd),           // input
    .rd_din (wb_data),  // input
    .write_enable (reg_write_en), // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .print_reg (print_reg)  //DO NOT TOUCH THIS
  );

  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(instruction[6:0]),  // input
    .is_jal(is_jal),        // output
    .is_jalr(is_jalr),       // output
    .branch(branch),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(reg_write_en),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(instruction),  // input
    .imm_gen_out(imm_value)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .opcode(instruction[6:0]),    // input
    .funct3(instruction[14:12]), // input
    .funct7(instruction[31:25]), // input
    .alu_op(alu_control)         // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_control),      // input
    .alu_in_1(rs1_dout),    // input  
    .alu_in_2(alu_src ? imm_value : rs2_dout),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)    // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (alu_result),       // input
    .din (rs2_dout),        // input
    .mem_read (mem_read),   // input
    .mem_write (mem_write),  // input
    .dout (mem_dout)        // output
  );

endmodule
