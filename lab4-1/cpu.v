// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

`include "opcodes.v"

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted, // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire pc_write, is_ecall;
  wire [1:0] forwardA, forwardB;
  wire [31:0] current_pc;
  wire [31:0] imm_gen_out, alu_out, mem_dout;
  wire [31:0] rs1_dout, rs2_dout;
  
  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg [31:0] IF_ID_inst;           // will be used in ID stage
  reg IF_ID_write;
  reg ID_EX_sel;
  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg [3:0] ID_EX_alu_op;         // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [4:0] ID_EX_rd, ID_EX_rs1, ID_EX_rs2;

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] EX_MEM_alu_out;
  reg [31:0]EX_MEM_dmem_data;
  reg [4:0] EX_MEM_rd;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  reg [4:0] MEM_WB_rd;
  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [31:0] MEM_WB_mem_to_reg_src_2;

  reg [31:0] alu_in_1, alu_in_2_pre, alu_in_2, wb_data, inst;
  reg mem_read, mem_to_reg, mem_write, reg_write, alu_src;
  reg [3:0] alu_op;

  reg check_halt, ID_EX_halt, EX_MEM_halt, MEM_WB_halt;

  assign check_halt = is_ecall && (print_reg[17] == 32'd10);
  assign is_halted = MEM_WB_halt;

  always @(*) begin
    case(forwardA)
      0: alu_in_1 = ID_EX_rs1_data;
      1: alu_in_1 = wb_data;
      2: alu_in_1 = EX_MEM_alu_out;
      default: alu_in_1 = 0;
    endcase
  end

  always @(*) begin
    case(forwardB)
      0: alu_in_2_pre = ID_EX_rs2_data;
      1: alu_in_2_pre = wb_data;
      2: alu_in_2_pre = EX_MEM_alu_out;
      default: alu_in_2_pre = 0;
    endcase
  end

  always @(*) begin
    if(ID_EX_alu_src) alu_in_2 = ID_EX_imm;
    else alu_in_2 = alu_in_2_pre;
  end

  always @(*) begin
    if(MEM_WB_mem_to_reg) wb_data = MEM_WB_mem_to_reg_src_1;
    else wb_data = MEM_WB_mem_to_reg_src_2;
  end

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(current_pc + 4),     // input
    .pc_write(pc_write),
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(inst)     // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      IF_ID_inst <= 0;
    end
    else begin
      if(IF_ID_write)
        IF_ID_inst <= inst;
      else
        IF_ID_inst <= 0;
    end
  end

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (IF_ID_inst[19:15]),          // input
    .rs2 (IF_ID_inst[24:20]),          // input
    .rd (MEM_WB_rd),           // input
    .rd_din (wb_data),       // input
    .write_enable (MEM_WB_reg_write),    // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),      // output
    .print_reg(print_reg)
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit (
    .opcode(IF_ID_inst[6:0]),
    .funct3(IF_ID_inst[14:12]),
    .funct7(IF_ID_inst[31:25]),
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .reg_write(reg_write),  // output
    .alu_op(alu_op),        // output
    .alu_src(alu_src),
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  HazardDetectionUnit hazard_detector(
    .rs1(IF_ID_inst[19:15]),
    .rs2(IF_ID_inst[24:20]),
    .opcode(IF_ID_inst[6:0]),
    .ID_EX_rd(ID_EX_rd),
    .ID_EX_mem_read(ID_EX_mem_read),
    .pc_write(pc_write),
    .IF_ID_write(IF_ID_write),
    .ID_EX_sel(ID_EX_sel)
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      ID_EX_imm <= 0;
      ID_EX_mem_read <= 0;
      ID_EX_mem_to_reg <= 0;
      ID_EX_mem_write <= 0;
      ID_EX_reg_write <= 0;
      ID_EX_alu_op <= 0;
      ID_EX_alu_src <= 0;
      ID_EX_rs1_data <= 0;
      ID_EX_rs2_data <= 0;
      ID_EX_rd <= 0;
      ID_EX_rs1 <= 0;
      ID_EX_rs2 <= 0;
      ID_EX_halt <= 0;
    end 
    else begin
      if(ID_EX_sel) begin
        ID_EX_mem_read <= 0;
        ID_EX_mem_to_reg <= 0;
        ID_EX_mem_write <= 0;
        ID_EX_reg_write <= 0;
        ID_EX_alu_op <= 0;
        ID_EX_alu_src <= 0;
      end
      else begin
        ID_EX_mem_read <= mem_read;
        ID_EX_mem_to_reg <= mem_to_reg;
        ID_EX_mem_write <= mem_write;
        ID_EX_reg_write <= reg_write;
        ID_EX_alu_op <= alu_op;
        ID_EX_alu_src <= alu_src;
      end
      ID_EX_imm <= imm_gen_out;
      ID_EX_rs1_data <= rs1_dout;
      ID_EX_rs2_data <= rs2_dout;
      ID_EX_rd <= IF_ID_inst[11:7];
      ID_EX_rs1 <= IF_ID_inst[19:15];
      ID_EX_rs2 <= IF_ID_inst[24:20];
      ID_EX_halt <= check_halt;
    end
  end

  // ---------- ALU ----------
  ALU alu(
    .alu_op(ID_EX_alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_out)  // output
  );

  ForwardingUnit forwarding(
    .rs1(ID_EX_rs1),
    .rs2(ID_EX_rs2),
    .EX_MEM_rd(EX_MEM_rd),
    .MEM_WB_rd(MEM_WB_rd),
    .EX_MEM_reg_write(EX_MEM_reg_write),
    .MEM_WB_reg_write(MEM_WB_reg_write),
    .forwardA(forwardA),
    .forwardB(forwardB)
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      EX_MEM_mem_read <= 0;
      EX_MEM_mem_to_reg <= 0;
      EX_MEM_mem_write <= 0;
      EX_MEM_reg_write <= 0;
      EX_MEM_alu_out <= 0;
      EX_MEM_rd <= 0;
      EX_MEM_dmem_data <= 0;
      EX_MEM_halt <= 0;
    end
    else begin
      EX_MEM_mem_read <= ID_EX_mem_read;
      EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;
      EX_MEM_mem_write <= ID_EX_mem_write;
      EX_MEM_reg_write <= ID_EX_reg_write;
      EX_MEM_alu_out <= alu_out;
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_dmem_data <= alu_in_2_pre;
      EX_MEM_halt <= ID_EX_halt;
    end
  end

  // ---------- Data Memory ----------
  DataMemory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (EX_MEM_alu_out),       // input
    .din (EX_MEM_dmem_data),        // input
    .mem_read (EX_MEM_mem_read),   // input
    .mem_write (EX_MEM_mem_write),  // input
    .dout (mem_dout)        // output
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_mem_to_reg_src_1 <= 0;
      MEM_WB_mem_to_reg_src_2 <= 0;
      MEM_WB_rd <= 0;
      MEM_WB_mem_to_reg <= 0;
      MEM_WB_reg_write <= 0;
      MEM_WB_halt <= 0;
    end
    else begin
      MEM_WB_mem_to_reg_src_1 <= mem_dout;
      MEM_WB_mem_to_reg_src_2 <= EX_MEM_alu_out;
      MEM_WB_rd <= EX_MEM_rd;
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;
      MEM_WB_reg_write <= EX_MEM_reg_write;
      MEM_WB_halt <= EX_MEM_halt;
    end
  end

  
endmodule
