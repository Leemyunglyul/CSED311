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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
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
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
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
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h37edc241_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha12b071a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hff6fb0c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h6d51447d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h675ff796_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h64bfb459_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha561d072_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h380a7dc1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h621af196_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

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
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imm_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__alu__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
