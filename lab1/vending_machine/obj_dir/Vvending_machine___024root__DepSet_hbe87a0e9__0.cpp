// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine__Syms.h"
#include "Vvending_machine___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__ico(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG

void Vvending_machine___024root___eval_triggers__ico(Vvending_machine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_triggers__ico\n"); );
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvending_machine___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__act(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG

void Vvending_machine___024root___eval_triggers__act(Vvending_machine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_triggers__act\n"); );
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.i_input_coin) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_input_coin__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.i_select_item) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_select_item__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__i_input_coin__0 
        = vlSelfRef.i_input_coin;
    vlSelfRef.__Vtrigprevexpr___TOP__i_select_item__0 
        = vlSelfRef.i_select_item;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvending_machine___024root___dump_triggers__act(vlSelf);
    }
#endif
}
