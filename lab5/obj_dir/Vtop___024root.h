// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(is_halted,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        CData/*1:0*/ top__DOT__cpu__DOT__forwardA;
        CData/*1:0*/ top__DOT__cpu__DOT__forwardB;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare_predict_taken;
        CData/*0:0*/ top__DOT__cpu__DOT__actual_taken;
        CData/*0:0*/ top__DOT__cpu__DOT__branch_mispredicted;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__is_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__is_hit;
        CData/*0:0*/ top__DOT__cpu__DOT__cache_busy;
        CData/*0:0*/ top__DOT__cpu__DOT__IF_ID_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_sel;
        CData/*3:0*/ top__DOT__cpu__DOT__ID_EX_alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_pc_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_bcond;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs2;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_pc_to_reg;
        CData/*4:0*/ top__DOT__cpu__DOT__EX_MEM_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_pc_to_reg;
        CData/*4:0*/ top__DOT__cpu__DOT__MEM_WB_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_to_reg;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_halt;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_halt;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_halt;
        CData/*0:0*/ top__DOT__cpu__DOT__final_halt;
        CData/*0:0*/ top__DOT__cpu__DOT__is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT____Vcellinp__gshare__update_valid;
        CData/*0:0*/ top__DOT__cpu__DOT____Vcellinp__pc__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__is_input_valid;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__gshare__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare__DOT__update_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare__DOT__update_taken;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare__DOT__predict_taken;
        CData/*6:0*/ top__DOT__cpu__DOT__gshare__DOT__bhsr;
        CData/*4:0*/ top__DOT__cpu__DOT__gshare__DOT__pc_idx;
        CData/*4:0*/ top__DOT__cpu__DOT__gshare__DOT__update_idx;
        CData/*6:0*/ top__DOT__cpu__DOT__gshare__DOT__pht_idx;
        CData/*6:0*/ top__DOT__cpu__DOT__gshare__DOT__update_pht_idx;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare__DOT__tag_match;
        CData/*0:0*/ top__DOT__cpu__DOT__gshare__DOT__pht_taken;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
        CData/*2:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__funct3;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__funct7;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__rs2;
        CData/*6:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__opcode;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__IF_ID_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_sel;
        CData/*3:0*/ top__DOT__cpu__DOT__alu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__alu_bcond;
        CData/*4:0*/ top__DOT__cpu__DOT__alu__DOT__shamt;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_reg_write;
        CData/*1:0*/ top__DOT__cpu__DOT__forwarding__DOT__forwardA;
        CData/*1:0*/ top__DOT__cpu__DOT__forwarding__DOT__forwardB;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_ready;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_hit;
        CData/*3:0*/ top__DOT__cpu__DOT__cache__DOT__idx;
        CData/*1:0*/ top__DOT__cpu__DOT__cache__DOT__bo;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_read_req;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_write_req;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__cache_write;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__cache_dirty;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT___is_ready;
        CData/*1:0*/ top__DOT__cpu__DOT__cache__DOT__current_state;
        CData/*1:0*/ top__DOT__cpu__DOT__cache__DOT__next_state;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__gshare_next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__correct_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_dmem_data;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_2_pre;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__wb_data;
        IData/*31:0*/ top__DOT__cpu__DOT__inst;
        IData/*31:0*/ top__DOT__cpu__DOT__jalr_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__jal_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT____Vcellinp__reg_file__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__pc;
        IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__update_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__update_target;
        IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__next_pc;
        IData/*24:0*/ top__DOT__cpu__DOT__gshare__DOT__pc_tag;
        IData/*24:0*/ top__DOT__cpu__DOT__gshare__DOT__update_tag;
        IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__i;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__imem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__dout;
        IData/*23:0*/ top__DOT__cpu__DOT__cache__DOT__tag;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__mem_addr;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__mem_rdata;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__cache_in;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<CData/*1:0*/, 128> top__DOT__cpu__DOT__gshare__DOT__pht;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__gshare__DOT__btb;
        VlUnpacked<IData/*24:0*/, 32> top__DOT__cpu__DOT__gshare__DOT__tag_table;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__imem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<IData/*23:0*/, 16> top__DOT__cpu__DOT__cache__DOT__tag_bank;
        VlUnpacked<CData/*0:0*/, 16> top__DOT__cpu__DOT__cache__DOT__valid_bank;
        VlUnpacked<CData/*0:0*/, 16> top__DOT__cpu__DOT__cache__DOT__dirty_bank;
        VlUnpacked<VlWide<4>/*127:0*/, 16> top__DOT__cpu__DOT__cache__DOT__data_bank;
        VlUnpacked<VlWide<4>/*127:0*/, 16384> top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem;
    };
    VlNBACommitQueue<VlUnpacked<CData/*1:0*/, 128>, false, CData/*1:0*/, 1> __VdlyCommitQueuetop__DOT__cpu__DOT__gshare__DOT__pht;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__GHR_BITS = 7U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__PC_TAG_BITS = 0x00000019U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__PC_INDEX_BITS = 5U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__gshare__DOT__PHT_SIZE = 0x00000080U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__LINE_SIZE = 0x00000010U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__NUM_SETS = 0x00000010U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__DELAY = 0x00000032U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__BLOCK_SIZE = 0x00000010U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
