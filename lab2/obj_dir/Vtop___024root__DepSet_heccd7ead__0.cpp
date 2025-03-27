// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlWide<15>/*479:0*/ Vtop__ConstPool__CONST_hcffcc7d5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h37edc241_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha12b071a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hff6fb0c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h6d51447d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h675ff796_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h64bfb459_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha561d072_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h380a7dc1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h621af196_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i);
        }
    }
    if (VL_UNLIKELY((vlSelfRef.reset))) {
        vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem[(0x3ffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(15, Vtop__ConstPool__CONST_hcffcc7d5_0)
                     ,  &(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.top__DOT__cpu__DOT__mem_write) {
            __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
                = vlSelfRef.top__DOT__cpu__DOT__rs2_dout;
            __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
                = (0x3fffU & (vlSelfRef.top__DOT__cpu__DOT__alu_result 
                              >> 2U));
            __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 1U;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__reg_write_en) 
             & (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__rd)))) {
            __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT__pc_to_reg)
                    ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__current_pc)
                    : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem_to_reg)
                        ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem_read)
                            ? vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
                           [(0x3fffU & (vlSelfRef.top__DOT__cpu__DOT__alu_result 
                                        >> 2U))] : 0U)
                        : vlSelfRef.top__DOT__cpu__DOT__alu_result));
            __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 
                = vlSelfRef.top__DOT__cpu__DOT__rd;
            __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
        vlSelfRef.top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__current_pc = vlSelfRef.top__DOT__cpu__DOT__next_pc;
    }
    if (__VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0] 
            = __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[__VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0] 
            = __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    }
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
    vlSelfRef.top__DOT__cpu__DOT__rd = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                                                      >> 2U))] 
                                                 >> 7U));
    vlSelfRef.top__DOT__cpu__DOT__rs1 = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                  [
                                                  (0x3ffU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                                                      >> 2U))] 
                                                  >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3 
        = (7U & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                 [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                             >> 2U))] >> 0xcU));
    vlSelfRef.top__DOT__cpu__DOT__rs2 = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                  [
                                                  (0x3ffU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                                                      >> 2U))] 
                                                  >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__instruction = vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                    >> 2U))];
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
           [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                       >> 2U))]);
    vlSelfRef.top__DOT__cpu__DOT__rs1_dout = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
                                              [vlSelfRef.top__DOT__cpu__DOT__rs1]);
    vlSelfRef.top__DOT__cpu__DOT__rs2_dout = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__rs2))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
                                              [vlSelfRef.top__DOT__cpu__DOT__rs2]);
    if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
            } else if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__alu_control = 1U;
                            vlSelfRef.top__DOT__cpu__DOT__imm_value 
                                = ((((- (IData)((vlSelfRef.top__DOT__cpu__DOT__instruction 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top__DOT__cpu__DOT__instruction) 
                                       | (0x800U & 
                                          (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                                   >> 0x14U))));
                        } else {
                            vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                            vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
                        }
                    } else {
                        vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                        vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                    vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                vlSelfRef.top__DOT__cpu__DOT__imm_value 
                    = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                            ? (((- (IData)((vlSelfRef.top__DOT__cpu__DOT__instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                            >> 0x14U))
                            : 0U) : 0U);
            } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    vlSelfRef.top__DOT__cpu__DOT__alu_control 
                        = ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                            ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                         ? 0xbU : 0xaU))
                            : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                         ? 9U : 8U)));
                    vlSelfRef.top__DOT__cpu__DOT__imm_value 
                        = (((- (IData)((vlSelfRef.top__DOT__cpu__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xdU) | (((0x1000U & 
                                          (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                               << 4U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                                 >> 7U)))));
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                    vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
                }
            } else {
                vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
            }
        } else {
            vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_control 
                = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                      ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                          ? ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                   ? 7U
                                                   : 6U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                   ? 5U
                                                   : 4U))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                     [
                                                     (0x3ffU 
                                                      & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                                                         >> 2U))] 
                                                     >> 0x19U))
                                                    ? 1U
                                                    : 2U))))
                                          : 0U) : 0U)));
            vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
        } else if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
        } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
        } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_control = 1U;
                vlSelfRef.top__DOT__cpu__DOT__imm_value 
                    = (((- (IData)((vlSelfRef.top__DOT__cpu__DOT__instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                                      >> 7U))));
            } else {
                vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
                vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
            }
        } else {
            vlSelfRef.top__DOT__cpu__DOT__alu_control = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imm_value = 0U;
        }
    } else {
        vlSelfRef.top__DOT__cpu__DOT__alu_control = 
            ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
              ? ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                           ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                    ? 7U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                    ? 5U
                                                    : 4U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3))
                                                    ? 3U
                                                    : 1U)))
                                        : 0U) : 0U)))
              : ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                           ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                        ? 1U : 0U) : 0U))));
        vlSelfRef.top__DOT__cpu__DOT__imm_value = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.top__DOT__cpu__DOT__instruction 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U)));
    }
    __Vtableidx1 = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__is_jal = Vtop__ConstPool__TABLE_h37edc241_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__is_jalr = Vtop__ConstPool__TABLE_ha12b071a_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__branch = Vtop__ConstPool__TABLE_hff6fb0c7_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h6d51447d_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_h6d51447d_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_h675ff796_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__alu_src = Vtop__ConstPool__TABLE_h64bfb459_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__reg_write_en = Vtop__ConstPool__TABLE_ha561d072_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__pc_to_reg = Vtop__ConstPool__TABLE_h380a7dc1_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_h621af196_0
        [__Vtableidx1];
    vlSelfRef.is_halted = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall) 
                           & (0xaU == vlSelfRef.print_reg
                              [0x11U]));
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_src)
            ? vlSelfRef.top__DOT__cpu__DOT__imm_value
            : vlSelfRef.top__DOT__cpu__DOT__rs2_dout);
    vlSelfRef.top__DOT__cpu__DOT__alu_result = ((8U 
                                                 & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                    & vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2)
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                    | vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2))
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                    ^ vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2))
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                    - vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                    + vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2)
                                                    : 0U))));
    vlSelfRef.top__DOT__cpu__DOT__next_pc = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr)
                                              ? (0xfffffffeU 
                                                 & (vlSelfRef.top__DOT__cpu__DOT__imm_value 
                                                    + vlSelfRef.top__DOT__cpu__DOT__rs1_dout))
                                              : (((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jal) 
                                                  | (((1U 
                                                       & ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control) 
                                                          >> 3U)) 
                                                      && ((1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control) 
                                                               >> 2U))) 
                                                          && ((2U 
                                                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                                ? 
                                                               VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__rs1_dout, vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2)
                                                                : 
                                                               VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__rs1_dout, vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2))
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                                                ? 
                                                               (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                                != vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2)
                                                                : 
                                                               (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                                                                == vlSelfRef.top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2))))) 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__branch)))
                                                  ? 
                                                 (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                                                  + vlSelfRef.top__DOT__cpu__DOT__imm_value)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__current_pc)));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
