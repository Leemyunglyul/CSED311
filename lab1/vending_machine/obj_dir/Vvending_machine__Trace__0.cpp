// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvending_machine__Syms.h"


void Vvending_machine___024root__trace_chg_0_sub_0(Vvending_machine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vvending_machine___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_chg_0\n"); );
    // Init
    Vvending_machine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvending_machine___024root*>(voidSelf);
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvending_machine___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vvending_machine___024root__trace_chg_0_sub_0(Vvending_machine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_chg_0_sub_0\n"); );
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.vending_machine__DOT__item_price[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.vending_machine__DOT__item_price[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.vending_machine__DOT__item_price[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.vending_machine__DOT__item_price[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.vending_machine__DOT__coin_value[0]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.vending_machine__DOT__coin_value[1]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.vending_machine__DOT__coin_value[2]),32);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.clk));
    bufp->chgBit(oldp+8,(vlSelfRef.reset_n));
    bufp->chgCData(oldp+9,(vlSelfRef.i_input_coin),3);
    bufp->chgCData(oldp+10,(vlSelfRef.i_select_item),4);
    bufp->chgBit(oldp+11,(vlSelfRef.i_trigger_return));
    bufp->chgCData(oldp+12,(vlSelfRef.o_available_item),4);
    bufp->chgCData(oldp+13,(vlSelfRef.o_output_item),4);
    bufp->chgCData(oldp+14,(vlSelfRef.o_return_coin),3);
    bufp->chgIData(oldp+15,(vlSelfRef.vending_machine__DOT__current_total),31);
    bufp->chgIData(oldp+16,((0x7fffffffU & ((vlSelfRef.vending_machine__DOT__current_total 
                                             + vlSelfRef.vending_machine__DOT__input_total) 
                                            - vlSelfRef.vending_machine__DOT__output_total))),31);
    bufp->chgIData(oldp+17,(vlSelfRef.vending_machine__DOT__input_total),31);
    bufp->chgIData(oldp+18,(vlSelfRef.vending_machine__DOT__output_total),31);
    bufp->chgIData(oldp+19,(vlSelfRef.vending_machine__DOT__return_total),31);
    bufp->chgIData(oldp+20,(vlSelfRef.vending_machine__DOT__wait_time),32);
    bufp->chgIData(oldp+21,(vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i),32);
    bufp->chgIData(oldp+22,(vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__left_coin),31);
    bufp->chgIData(oldp+23,(vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__i),32);
}

void Vvending_machine___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_cleanup\n"); );
    // Init
    Vvending_machine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvending_machine___024root*>(voidSelf);
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
