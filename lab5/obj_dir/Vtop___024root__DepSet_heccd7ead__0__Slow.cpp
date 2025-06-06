// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk1__DOT__w = 1U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk1__DOT__w = 2U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk1__DOT__w = 3U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk1__DOT__w = 4U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__i = 1U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__i = 2U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__i = 3U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 1U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 2U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 3U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 4U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 1U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 2U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 3U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 4U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 1U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 2U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 3U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 4U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 1U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 2U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 3U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 4U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk6__DOT__i = 1U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk6__DOT__i = 3U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk6__DOT__i = 4U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h14a5b4b3_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vtop__ConstPool__TABLE_h55a8fd5c_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT____Vcellinp__gshare__pc;
    top__DOT__cpu__DOT____Vcellinp__gshare__pc = 0;
    CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid;
    top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pc 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__funct3 
        = (7U & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                 >> 0xcU));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__funct7 
        = (0x7fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x19U));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst;
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__rs1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_rd 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__rs2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__addr 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__din = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_idx 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc 
                    >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_tag 
        = (vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc >> 7U);
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx 
        = (0x7fU & ((vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc 
                     >> 2U) ^ (IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__bhsr)));
    vlSelfRef.top__DOT__cpu__DOT__rs1_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0xfU))];
    vlSelfRef.top__DOT__cpu__DOT__rs2_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__gshare__update_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal) 
              | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)));
    vlSelfRef.is_halted = vlSelfRef.top__DOT__cpu__DOT__final_halt;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__current_pc, 2U);
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset 
        = (3U & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
                 >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__is_input_valid = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read) 
         | (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelfRef.top__DOT__cpu__DOT__forwardA = ((((0U 
                                                 != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1)) 
                                                & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1) 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd))) 
                                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))
                                               ? 2U
                                               : ((
                                                   ((0U 
                                                     != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1)) 
                                                    & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1) 
                                                       == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd))) 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))
                                                   ? 1U
                                                   : 0U));
    vlSelfRef.top__DOT__cpu__DOT__forwardB = ((((0U 
                                                 != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2)) 
                                                & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2) 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd))) 
                                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))
                                               ? 2U
                                               : ((
                                                   ((0U 
                                                     != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2)) 
                                                    & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2) 
                                                       == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd))) 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))
                                                   ? 1U
                                                   : 0U));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag = 
        (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
         >> 6U);
    vlSelfRef.top__DOT__cpu__DOT__is_ready = (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelfRef.top__DOT__cpu__DOT__wb_data = ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                              ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1
                                              : vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx = 
        (3U & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
               >> 4U));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst);
    vlSelfRef.print_reg[0U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelfRef.print_reg[1U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelfRef.print_reg[2U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelfRef.print_reg[3U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelfRef.print_reg[4U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelfRef.print_reg[5U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelfRef.print_reg[6U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelfRef.print_reg[7U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelfRef.print_reg[8U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelfRef.print_reg[9U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelfRef.print_reg[0xaU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelfRef.print_reg[0xbU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelfRef.print_reg[0xcU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelfRef.print_reg[0xdU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelfRef.print_reg[0xeU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelfRef.print_reg[0xfU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelfRef.print_reg[0x10U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelfRef.print_reg[0x11U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelfRef.print_reg[0x12U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelfRef.print_reg[0x13U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelfRef.print_reg[0x14U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelfRef.print_reg[0x15U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelfRef.print_reg[0x16U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelfRef.print_reg[0x17U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelfRef.print_reg[0x18U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelfRef.print_reg[0x19U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelfRef.print_reg[0x1aU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelfRef.print_reg[0x1bU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelfRef.print_reg[0x1cU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelfRef.print_reg[0x1dU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelfRef.print_reg[0x1eU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelfRef.print_reg[0x1fU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_dout;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs2_dout;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_valid 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__gshare__update_valid;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__inst = vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelfRef.top__DOT__cpu__DOT__is_input_valid;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__forwardA 
        = vlSelfRef.top__DOT__cpu__DOT__forwardA;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__forwardB 
        = vlSelfRef.top__DOT__cpu__DOT__forwardB;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_output_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd_din 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg)
            ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc)
            : vlSelfRef.top__DOT__cpu__DOT__wb_data);
    vlSelfRef.top__DOT__cpu__DOT__alu_in_1 = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__forwardA))
                                               ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data
                                               : ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__forwardA))
                                                   ? vlSelfRef.top__DOT__cpu__DOT__wb_data
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__forwardA))
                                                    ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
                                                    : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2_pre = ((0U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__forwardB))
                                                   ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__forwardB))
                                                    ? vlSelfRef.top__DOT__cpu__DOT__wb_data
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.top__DOT__cpu__DOT__forwardB))
                                                     ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
                                                     : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 1U;
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [0U][0U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [0U][1U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [0U][2U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [0U][3U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 1U;
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [1U][0U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [1U][1U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [1U][2U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [1U][3U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way = 1U;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 1U;
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [2U][0U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [2U][1U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [2U][2U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [2U][3U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way = 2U;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 1U;
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [3U][0U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [3U][1U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [3U][2U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [3U][3U]) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = 0U;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way = 3U;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit 
        = ((0xeU & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit)) 
           | (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
              [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
              [0U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                      [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                      [0U] == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag)));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit 
        = ((0xdU & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit)) 
           | ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
               [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
               [1U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [1U] == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag)) 
              << 1U));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit 
        = ((0xbU & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit)) 
           | ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
               [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
               [2U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [2U] == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag)) 
              << 2U));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit 
        = ((7U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit)) 
           | ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
               [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
               [3U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [3U] == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag)) 
              << 3U));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__mem_read = 0U;
    vlSelfRef.top__DOT__cpu__DOT__mem_to_reg = 0U;
    vlSelfRef.top__DOT__cpu__DOT__mem_write = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                                vlSelfRef.top__DOT__cpu__DOT__mem_read = 1U;
                                vlSelfRef.top__DOT__cpu__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                                vlSelfRef.top__DOT__cpu__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__reg_write = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_src = 0U;
    vlSelfRef.top__DOT__cpu__DOT__pc_to_reg = 0U;
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_op = 0U;
    vlSelfRef.top__DOT__cpu__DOT__IF_ID_write = ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read) 
                                                      & (((0x1fU 
                                                           & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                              >> 0xfU)) 
                                                          == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
                                                         & (0U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                >> 0xfU))))))) 
                                                 && (1U 
                                                     & (((((0x1fU 
                                                            & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0x14U)) 
                                                           == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
                                                          & (0U 
                                                             != 
                                                             (0x1fU 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                 >> 0x14U)))) 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read))
                                                         ? 
                                                        (((((3U 
                                                             == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                            | (0x13U 
                                                               == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                           | (0x73U 
                                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                          | (0x67U 
                                                             == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                         | (0x6fU 
                                                            == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))
                                                         : 
                                                        (~ 
                                                         (((0x73U 
                                                            == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                           & (0x11U 
                                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd))) 
                                                          & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write))))));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel = (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read) 
                                                & (((0x1fU 
                                                     & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                          >> 0xfU))))) 
                                               || (1U 
                                                   & (((((0x1fU 
                                                          & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0x14U)))) 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read))
                                                       ? 
                                                      (~ 
                                                       (((((3U 
                                                            == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                           | (0x13U 
                                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                          | (0x73U 
                                                             == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                         | (0x67U 
                                                            == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                        | (0x6fU 
                                                           == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))))
                                                       : 
                                                      (((0x73U 
                                                         == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                        & (0x11U 
                                                           == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd))) 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write)))));
    vlSelfRef.top__DOT__cpu__DOT__pc_write = ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read) 
                                                   & (((0x1fU 
                                                        & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                             >> 0xfU))))))) 
                                              && (1U 
                                                  & (((((0x1fU 
                                                         & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                            >> 0x14U)) 
                                                        == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                              >> 0x14U)))) 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read))
                                                      ? 
                                                     (((((3U 
                                                          == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                         | (0x13U 
                                                            == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                        | (0x73U 
                                                           == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                       | (0x67U 
                                                          == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                      | (0x6fU 
                                                         == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))
                                                      : 
                                                     (~ 
                                                      (((0x73U 
                                                         == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                        & (0x11U 
                                                           == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd))) 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write))))));
    vlSelfRef.top__DOT__cpu__DOT__is_jal = 0U;
    vlSelfRef.top__DOT__cpu__DOT__is_jalr = 0U;
    vlSelfRef.top__DOT__cpu__DOT__is_branch = 0U;
    if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                                vlSelfRef.top__DOT__cpu__DOT__reg_write = 1U;
                                vlSelfRef.top__DOT__cpu__DOT__pc_to_reg = 1U;
                                vlSelfRef.top__DOT__cpu__DOT__is_jal = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__reg_write = 1U;
                            vlSelfRef.top__DOT__cpu__DOT__pc_to_reg = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                                vlSelfRef.top__DOT__cpu__DOT__alu_src = 1U;
                                vlSelfRef.top__DOT__cpu__DOT__alu_op = 1U;
                                vlSelfRef.top__DOT__cpu__DOT__is_jalr = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                = ((0x4000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                    ? ((0x2000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                        ? 0U : ((0x1000U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                                 ? 0xbU
                                                 : 0xaU))
                                    : ((0x2000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                        ? 0U : ((0x1000U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                                 ? 9U
                                                 : 8U)));
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                                vlSelfRef.top__DOT__cpu__DOT__is_branch = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                                vlSelfRef.top__DOT__cpu__DOT__is_ecall = 1U;
                            }
                        }
                    }
                }
                vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = 0U;
            } else {
                vlSelfRef.top__DOT__cpu__DOT__imm_gen_out 
                    = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                        ? ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                            ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                    ? ((((- (IData)(
                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 0x1fU))) 
                                         << 0x15U) 
                                        | (0x100000U 
                                           & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0xbU))) 
                                       | (((0xff000U 
                                            & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst) 
                                           | (0x800U 
                                              & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 9U))) 
                                          | (0x7feU 
                                             & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0x14U))))
                                    : 0U) : 0U) : 0U)
                        : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                            ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x14U)) : 0U)
                                : 0U) : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                              ? (((- (IData)(
                                                             (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                              >> 0x1fU))) 
                                                  << 0xdU) 
                                                 | (((0x1000U 
                                                      & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0x13U)) 
                                                     | (0x800U 
                                                        & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                           << 4U))) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                             >> 7U)))))
                                              : 0U)
                                          : 0U)));
            }
        } else {
            vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__reg_write = 1U;
                            vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                = ((0x4000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                    ? ((0x2000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                        ? ((0x1000U 
                                            & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                            ? 7U : 6U)
                                        : ((0x1000U 
                                            & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                            ? 5U : 4U))
                                    : ((0x2000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                        ? 0U : ((0x1000U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                                 ? 3U
                                                 : 
                                                ((0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x19U))
                                                  ? 1U
                                                  : 2U))));
                        }
                    }
                }
            }
            vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__alu_op = 1U;
                        }
                    }
                }
            }
            vlSelfRef.top__DOT__cpu__DOT__imm_gen_out 
                = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                      ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                          ? (((- (IData)(
                                                         (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 7U))))
                                          : 0U) : 0U)));
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__alu_src = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__reg_write = 1U;
                            vlSelfRef.top__DOT__cpu__DOT__alu_src = 1U;
                            vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                = ((0x4000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                    ? ((0x2000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                        ? ((0x1000U 
                                            & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                            ? 7U : 6U)
                                        : ((0x1000U 
                                            & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                            ? 5U : 4U))
                                    : ((0x2000U & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                        ? 0U : ((0x1000U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                                 ? 3U
                                                 : 1U)));
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        vlSelfRef.top__DOT__cpu__DOT__reg_write = 1U;
                        vlSelfRef.top__DOT__cpu__DOT__alu_src = 1U;
                        vlSelfRef.top__DOT__cpu__DOT__alu_op = 1U;
                    }
                }
            }
        }
        vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = 
            ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
              ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                       ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x14U)) : 0U)
                                : 0U)));
    }
    vlSelfRef.top__DOT__print_reg[0U] = vlSelfRef.print_reg
        [0U];
    vlSelfRef.top__DOT__print_reg[1U] = vlSelfRef.print_reg
        [1U];
    vlSelfRef.top__DOT__print_reg[2U] = vlSelfRef.print_reg
        [2U];
    vlSelfRef.top__DOT__print_reg[3U] = vlSelfRef.print_reg
        [3U];
    vlSelfRef.top__DOT__print_reg[4U] = vlSelfRef.print_reg
        [4U];
    vlSelfRef.top__DOT__print_reg[5U] = vlSelfRef.print_reg
        [5U];
    vlSelfRef.top__DOT__print_reg[6U] = vlSelfRef.print_reg
        [6U];
    vlSelfRef.top__DOT__print_reg[7U] = vlSelfRef.print_reg
        [7U];
    vlSelfRef.top__DOT__print_reg[8U] = vlSelfRef.print_reg
        [8U];
    vlSelfRef.top__DOT__print_reg[9U] = vlSelfRef.print_reg
        [9U];
    vlSelfRef.top__DOT__print_reg[0xaU] = vlSelfRef.print_reg
        [0xaU];
    vlSelfRef.top__DOT__print_reg[0xbU] = vlSelfRef.print_reg
        [0xbU];
    vlSelfRef.top__DOT__print_reg[0xcU] = vlSelfRef.print_reg
        [0xcU];
    vlSelfRef.top__DOT__print_reg[0xdU] = vlSelfRef.print_reg
        [0xdU];
    vlSelfRef.top__DOT__print_reg[0xeU] = vlSelfRef.print_reg
        [0xeU];
    vlSelfRef.top__DOT__print_reg[0xfU] = vlSelfRef.print_reg
        [0xfU];
    vlSelfRef.top__DOT__print_reg[0x10U] = vlSelfRef.print_reg
        [0x10U];
    vlSelfRef.top__DOT__print_reg[0x11U] = vlSelfRef.print_reg
        [0x11U];
    vlSelfRef.top__DOT__print_reg[0x12U] = vlSelfRef.print_reg
        [0x12U];
    vlSelfRef.top__DOT__print_reg[0x13U] = vlSelfRef.print_reg
        [0x13U];
    vlSelfRef.top__DOT__print_reg[0x14U] = vlSelfRef.print_reg
        [0x14U];
    vlSelfRef.top__DOT__print_reg[0x15U] = vlSelfRef.print_reg
        [0x15U];
    vlSelfRef.top__DOT__print_reg[0x16U] = vlSelfRef.print_reg
        [0x16U];
    vlSelfRef.top__DOT__print_reg[0x17U] = vlSelfRef.print_reg
        [0x17U];
    vlSelfRef.top__DOT__print_reg[0x18U] = vlSelfRef.print_reg
        [0x18U];
    vlSelfRef.top__DOT__print_reg[0x19U] = vlSelfRef.print_reg
        [0x19U];
    vlSelfRef.top__DOT__print_reg[0x1aU] = vlSelfRef.print_reg
        [0x1aU];
    vlSelfRef.top__DOT__print_reg[0x1bU] = vlSelfRef.print_reg
        [0x1bU];
    vlSelfRef.top__DOT__print_reg[0x1cU] = vlSelfRef.print_reg
        [0x1cU];
    vlSelfRef.top__DOT__print_reg[0x1dU] = vlSelfRef.print_reg
        [0x1dU];
    vlSelfRef.top__DOT__print_reg[0x1eU] = vlSelfRef.print_reg
        [0x1eU];
    vlSelfRef.top__DOT__print_reg[0x1fU] = vlSelfRef.print_reg
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0U] = vlSelfRef.print_reg
        [0U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[1U] = vlSelfRef.print_reg
        [1U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[2U] = vlSelfRef.print_reg
        [2U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[3U] = vlSelfRef.print_reg
        [3U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[4U] = vlSelfRef.print_reg
        [4U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[5U] = vlSelfRef.print_reg
        [5U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[6U] = vlSelfRef.print_reg
        [6U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[7U] = vlSelfRef.print_reg
        [7U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[8U] = vlSelfRef.print_reg
        [8U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[9U] = vlSelfRef.print_reg
        [9U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xaU] = 
        vlSelfRef.print_reg[0xaU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xbU] = 
        vlSelfRef.print_reg[0xbU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xcU] = 
        vlSelfRef.print_reg[0xcU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xdU] = 
        vlSelfRef.print_reg[0xdU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xeU] = 
        vlSelfRef.print_reg[0xeU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xfU] = 
        vlSelfRef.print_reg[0xfU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x10U] 
        = vlSelfRef.print_reg[0x10U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x11U] 
        = vlSelfRef.print_reg[0x11U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x12U] 
        = vlSelfRef.print_reg[0x12U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x13U] 
        = vlSelfRef.print_reg[0x13U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x14U] 
        = vlSelfRef.print_reg[0x14U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x15U] 
        = vlSelfRef.print_reg[0x15U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x16U] 
        = vlSelfRef.print_reg[0x16U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x17U] 
        = vlSelfRef.print_reg[0x17U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x18U] 
        = vlSelfRef.print_reg[0x18U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x19U] 
        = vlSelfRef.print_reg[0x19U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1aU] 
        = vlSelfRef.print_reg[0x1aU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1bU] 
        = vlSelfRef.print_reg[0x1bU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1cU] 
        = vlSelfRef.print_reg[0x1cU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1dU] 
        = vlSelfRef.print_reg[0x1dU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1eU] 
        = vlSelfRef.print_reg[0x1eU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1fU] 
        = vlSelfRef.print_reg[0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelfRef.print_reg[0U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelfRef.print_reg[1U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelfRef.print_reg[2U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelfRef.print_reg[3U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelfRef.print_reg[4U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelfRef.print_reg[5U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelfRef.print_reg[6U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelfRef.print_reg[7U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelfRef.print_reg[8U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelfRef.print_reg[9U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelfRef.print_reg[0xaU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelfRef.print_reg[0xbU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelfRef.print_reg[0xcU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelfRef.print_reg[0xdU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelfRef.print_reg[0xeU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelfRef.print_reg[0xfU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelfRef.print_reg[0x10U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelfRef.print_reg[0x11U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelfRef.print_reg[0x12U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelfRef.print_reg[0x13U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelfRef.print_reg[0x14U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelfRef.print_reg[0x15U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelfRef.print_reg[0x16U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelfRef.print_reg[0x17U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelfRef.print_reg[0x18U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelfRef.print_reg[0x19U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelfRef.print_reg[0x1aU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelfRef.print_reg[0x1bU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelfRef.print_reg[0x1cU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelfRef.print_reg[0x1dU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelfRef.print_reg[0x1eU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelfRef.print_reg[0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__inst;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_output_valid) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][3U];
    } else {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[3U] = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd_din;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_1;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src)
                                               ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm
                                               : vlSelfRef.top__DOT__cpu__DOT__alu_in_2_pre);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way][0U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[1U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way][1U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[2U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way][2U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[3U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way][3U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[0U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[1U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[2U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[3U] = 0U;
    if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit))) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][3U];
    }
    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit))) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][3U];
    }
    if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit))) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [2U][0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [2U][1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [2U][2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [2U][3U];
    }
    if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit))) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [3U][0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [3U][1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [3U][2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [3U][3U];
    }
    __Vtableidx1 = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way 
        = Vtop__ConstPool__TABLE_h14a5b4b3_0[__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk2__DOT__i 
        = Vtop__ConstPool__TABLE_h55a8fd5c_0[__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__is_hit = (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__mem_read;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg 
        = vlSelfRef.top__DOT__cpu__DOT__mem_to_reg;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__mem_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__reg_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
        = vlSelfRef.top__DOT__cpu__DOT__alu_src;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg 
        = vlSelfRef.top__DOT__cpu__DOT__pc_to_reg;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelfRef.top__DOT__cpu__DOT__is_ecall;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__IF_ID_write 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_write;
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_sel 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel;
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__pc_write 
        = vlSelfRef.top__DOT__cpu__DOT__pc_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal 
        = vlSelfRef.top__DOT__cpu__DOT__is_jal;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr 
        = vlSelfRef.top__DOT__cpu__DOT__is_jalr;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_branch 
        = vlSelfRef.top__DOT__cpu__DOT__is_branch;
    vlSelfRef.top__DOT__cpu__DOT__gshare_enable = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_branch) 
                                                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[0U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[1U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[1U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[2U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[2U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[3U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[3U];
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_2;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__shamt = 
        (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = ((1U 
                                                & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op) 
                                                   >> 3U)) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op) 
                                                        >> 2U))) 
                                                   && ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                         ? 
                                                        VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                         : 
                                                        VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                         ? 
                                                        (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                         != vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                         : 
                                                        (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                         == vlSelfRef.top__DOT__cpu__DOT__alu_in_2)))));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[0U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[1U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[1U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[2U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[2U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[3U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[3U];
    vlSelfRef.top__DOT__cpu__DOT__mem_dout = (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset), 5U)))
                                                ? 0U
                                                : (
                                                   vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset), 5U))))) 
                                              | (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line[
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset), 5U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset), 5U))));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_hit 
        = vlSelfRef.top__DOT__cpu__DOT__is_hit;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_event 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_input_valid) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_event 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_input_valid));
    vlSelfRef.top__DOT__cpu__DOT__is_output_valid = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_write = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_dirty = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__cache_busy = ((~ 
                                                 ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit) 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready))) 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_input_valid));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[0U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[1U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[2U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[3U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req = 0U;
    if ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if (vlSelfRef.top__DOT__cpu__DOT__is_input_valid) {
            if (vlSelfRef.top__DOT__cpu__DOT__is_hit) {
                if (((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write) 
                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready))) {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_write = 1U;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_dirty = 1U;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 0U;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[0U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][0U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[1U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][1U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[2U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][2U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[3U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][3U];
                    VL_ASSIGNSEL_WI(128,32,(0x7fU & 
                                            VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset), 5U)), vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in, vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data);
                } else if (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read) {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_write = 1U;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_dirty 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 0U;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[0U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][0U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[1U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][1U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[2U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][2U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[3U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way][3U];
                }
            } else if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way] 
                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready))) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 1U;
            } else if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 2U;
            }
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit)))) {
                if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way] 
                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready))) {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr 
                        = ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way] 
                            << 6U) | ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx) 
                                      << 4U));
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req = 1U;
                } else if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready) {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr 
                        = (0xfffffff0U & vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out);
                }
                if ((1U & (~ (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                              [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                              [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way] 
                              & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready))))) {
                    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready) {
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U != (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
            if ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
                if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_output_valid) {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_write = 1U;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_dirty = 0U;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[0U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[0U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[1U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[1U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[2U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[2U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[3U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[3U];
                    if (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write) {
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_dirty = 1U;
                        VL_ASSIGNSEL_WI(128,32,(0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset), 5U)), vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in, vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data);
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
            if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 2U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr 
                    = (0xfffffff0U & vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out);
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
            if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_output_valid) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 0U;
            }
        }
    }
    if (vlSelfRef.top__DOT__cpu__DOT__gshare_enable) {
        top__DOT__cpu__DOT____Vcellinp__gshare__pc 
            = vlSelfRef.top__DOT__cpu__DOT__current_pc;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_tag 
            = (vlSelfRef.top__DOT__cpu__DOT__current_pc 
               >> 7U);
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_idx 
            = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                        >> 2U));
    } else {
        top__DOT__cpu__DOT____Vcellinp__gshare__pc = 0xffffffffU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_tag = 0x1ffffffU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_idx = 0x1fU;
    }
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_idx 
        = (0x7fU & (((IData)(vlSelfRef.top__DOT__cpu__DOT__gshare_enable)
                      ? (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                         >> 2U) : 0x7fU) ^ (IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__bhsr)));
    vlSelfRef.top__DOT__cpu__DOT__alu_out = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_out = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    | vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    >> (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__shamt))
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    ^ vlSelfRef.top__DOT__cpu__DOT__alu_in_2)))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    << (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__shamt))
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    - vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    + vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                    : 0U))));
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelfRef.top__DOT__cpu__DOT__alu_bcond;
    vlSelfRef.top__DOT__cpu__DOT__actual_taken = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr) 
                                                  | ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch) 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_bcond)));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dout 
        = vlSelfRef.top__DOT__cpu__DOT__mem_dout;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_output_valid 
        = vlSelfRef.top__DOT__cpu__DOT__is_output_valid;
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__pc_write));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req;
    top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req));
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc = top__DOT__cpu__DOT____Vcellinp__gshare__pc;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_taken 
        = (2U <= vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht
           [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_idx]);
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_match 
        = (vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_tag 
           == vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table
           [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_idx]);
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelfRef.top__DOT__cpu__DOT__alu_out;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_taken 
        = vlSelfRef.top__DOT__cpu__DOT__actual_taken;
    vlSelfRef.top__DOT__cpu__DOT__correct_pc = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)
                                                 ? vlSelfRef.top__DOT__cpu__DOT__alu_out
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__actual_taken)
                                                  ? 
                                                 (vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm 
                                                  + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc)));
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__pc_write 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid 
        = top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived 
        = top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid;
    vlSelfRef.top__DOT__cpu__DOT__gshare_predict_taken 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_taken) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_match));
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_target 
        = vlSelfRef.top__DOT__cpu__DOT__correct_pc;
    if (vlSelfRef.top__DOT__cpu__DOT__gshare_predict_taken) {
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__predict_taken = 1U;
        vlSelfRef.top__DOT__cpu__DOT__gshare_next_pc 
            = vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb
            [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_idx];
    } else {
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__predict_taken = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare_next_pc 
            = ((IData)(4U) + top__DOT__cpu__DOT____Vcellinp__gshare__pc);
    }
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__gshare_next_pc;
    vlSelfRef.top__DOT__cpu__DOT__branch_mispredicted 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch) 
            | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)) 
           & (((IData)(vlSelfRef.top__DOT__cpu__DOT__gshare_predict_taken) 
               != (IData)(vlSelfRef.top__DOT__cpu__DOT__actual_taken)) 
              | (vlSelfRef.top__DOT__cpu__DOT__gshare_next_pc 
                 != vlSelfRef.top__DOT__cpu__DOT__correct_pc)));
    vlSelfRef.top__DOT__cpu__DOT__next_pc = ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_mispredicted)
                                              ? vlSelfRef.top__DOT__cpu__DOT__correct_pc
                                              : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jal)
                                                  ? 
                                                 (vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc 
                                                  + vlSelfRef.top__DOT__cpu__DOT__imm_gen_out)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__cpu__DOT__gshare_predict_taken)
                                                   ? vlSelfRef.top__DOT__cpu__DOT__gshare_next_pc
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.top__DOT__cpu__DOT__current_pc))));
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwardA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwardB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__gshare_predict_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_mispredicted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__correct_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_2_pre = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ID_EX_halt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_halt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_halt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__final_halt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__jalr_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__jal_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__gshare__update_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__reg_file__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__update_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__update_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__update_target = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__update_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__predict_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__bhsr = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__gshare__DOT__pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__gshare__DOT__btb[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__gshare__DOT__tag_table[__Vi0] = VL_RAND_RESET_I(25);
    }
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__pc_idx = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__pc_tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__update_idx = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__update_tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__pht_idx = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__update_pht_idx = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__tag_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__pht_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__gshare__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__IF_ID_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__forwardA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwarding__DOT__forwardB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__total_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_event = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_event = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag = VL_RAND_RESET_I(26);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__idx = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__word_offset = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(26);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__valid_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_bank[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__lru_matrix[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rdata);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__way_hit = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__replace_way = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__selected_line);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__next_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_in);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_dirty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__write_way = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__unnamedblk1__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__unnamedblk6__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vi0]);
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
