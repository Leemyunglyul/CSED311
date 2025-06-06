// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
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
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h2fd1a46d_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h14a5b4b3_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vtop__ConstPool__TABLE_h55a8fd5c_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid;
    top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vdly__top__DOT__cpu__DOT__gshare__DOT__bhsr;
    __Vdly__top__DOT__cpu__DOT__gshare__DOT__bhsr = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__current_pc;
    __Vdly__top__DOT__cpu__DOT__current_pc = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__total_count;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__total_count = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__hit_count;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__hit_count = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v0;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v0 = 0;
    IData/*24:0*/ __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32;
    __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32;
    __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32 = 0;
    CData/*6:0*/ __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v0;
    __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v0 = 0;
    CData/*1:0*/ __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v1;
    __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v1 = 0;
    CData/*6:0*/ __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v1;
    __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v1 = 0;
    CData/*1:0*/ __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v2;
    __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v2 = 0;
    CData/*6:0*/ __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v2;
    __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v0;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__btb__v32;
    __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__btb__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__btb__v32;
    __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__btb__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v32;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16;
    VL_ZERO_W(128, __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16);
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__data_bank__v16;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0 = 0;
    IData/*25:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0;
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v0 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64 = 0;
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66 = 0;
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68 = 0;
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70 = 0;
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71 = 0;
    CData/*1:0*/ __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71;
    __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v0 = 0;
    CData/*0:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16;
    __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 = 0;
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v0 = 0;
    CData/*1:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16 = 0;
    CData/*1:0*/ __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16;
    __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    VL_ZERO_W(128, __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    // Body
    __Vdly__top__DOT__cpu__DOT__gshare__DOT__bhsr = vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__bhsr;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v32 = 0U;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32 = 0U;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__total_count 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__total_count;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 0U;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__hit_count 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_count;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_count;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 = 0U;
    __Vdly__top__DOT__cpu__DOT__current_pc = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 4U;
    }
    if (VL_UNLIKELY((vlSelfRef.reset))) {
        vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(16, Vtop__ConstPool__CONST_h2fd1a46d_0)
                     ,  &(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][0U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][1U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][2U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][3U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i);
        }
    } else if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_write) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j = 4U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i)) {
            __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v0 
                = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i);
            vlSelfRef.__VdlyCommitQueuetop__DOT__cpu__DOT__gshare__DOT__pht.enqueue(1U, (IData)(__VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v0));
            vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i);
        }
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 1U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 2U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 3U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 4U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 5U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 6U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 7U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 8U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 9U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0xaU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0xbU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0xcU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0xdU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0xeU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0xfU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x10U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x11U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x12U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x13U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x14U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x15U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x16U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x17U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x18U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x19U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x1aU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x1bU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x1cU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x1dU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x1eU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x1fU;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i = 0x20U;
    } else if (vlSelfRef.top__DOT__cpu__DOT____Vcellinp__gshare__update_valid) {
        if (vlSelfRef.top__DOT__cpu__DOT__actual_taken) {
            if ((3U > vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht
                 [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx])) {
                __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v1 
                    = (3U & ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht
                             [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx]));
                __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v1 
                    = vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx;
                vlSelfRef.__VdlyCommitQueuetop__DOT__cpu__DOT__gshare__DOT__pht.enqueue(__VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v1, (IData)(__VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v1));
            }
        } else if ((0U < vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht
                    [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx])) {
            __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v2 
                = (3U & (vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht
                         [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx] 
                         - (IData)(1U)));
            __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v2 
                = vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx;
            vlSelfRef.__VdlyCommitQueuetop__DOT__cpu__DOT__gshare__DOT__pht.enqueue(__VdlyVal__top__DOT__cpu__DOT__gshare__DOT__pht__v2, (IData)(__VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__pht__v2));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write) 
             & (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U];
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 
                = (0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr);
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__top__DOT__cpu__DOT__gshare__DOT__bhsr = 0U;
        __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__total_count = 0U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__hit_count = 0U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count = 0U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__current_pc = 0U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v0 = 1U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
    } else {
        if (vlSelfRef.top__DOT__cpu__DOT____Vcellinp__gshare__update_valid) {
            __Vdly__top__DOT__cpu__DOT__gshare__DOT__bhsr 
                = ((0x7eU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__bhsr) 
                             << 1U)) | (IData)(vlSelfRef.top__DOT__cpu__DOT__actual_taken));
            if (vlSelfRef.top__DOT__cpu__DOT__actual_taken) {
                __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__btb__v32 
                    = vlSelfRef.top__DOT__cpu__DOT__correct_pc;
                __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__btb__v32 
                    = vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_idx;
                __VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v32 = 1U;
                __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32 
                    = vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_tag;
                __VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32 
                    = vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_idx;
                __VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32 = 1U;
            }
        }
        if (((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state)) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_input_valid))) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__total_count 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__cache__DOT__total_count);
            if (vlSelfRef.top__DOT__cpu__DOT__is_hit) {
                __Vdly__top__DOT__cpu__DOT__cache__DOT__hit_count 
                    = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_count);
            }
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit)))) {
                __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count 
                    = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_count);
            }
        }
        if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_write) {
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[0U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[1U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[2U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in[3U];
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
            __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_dirty;
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
            __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16 = 1U;
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
            __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag;
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
            __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 1U;
            if ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way))) {
                __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
                __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64 = 1U;
                __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            }
            if ((1U != (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way))) {
                __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
                __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66 = 1U;
                __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            }
            if ((2U != (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way))) {
                __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
                __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68 = 1U;
                __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            }
            if ((3U != (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way))) {
                __VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
                __VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70 = 1U;
                __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way;
                __VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            }
        }
        __Vdly__top__DOT__cpu__DOT__current_pc = ((IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write)
                                                   ? vlSelfRef.top__DOT__cpu__DOT__next_pc
                                                   : vlSelfRef.top__DOT__cpu__DOT__current_pc);
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)))) {
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data 
                = vlSelfRef.top__DOT__cpu__DOT__alu_in_2_pre;
        }
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_mispredicted))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__is_jal));
    }
    vlSelfRef.__VdlyCommitQueuetop__DOT__cpu__DOT__gshare__DOT__pht.commit(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht);
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__final_halt = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state = 0U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_halt = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_halt = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)))) {
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_to_reg;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
                = vlSelfRef.top__DOT__cpu__DOT__mem_dout;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
            vlSelfRef.top__DOT__cpu__DOT__final_halt 
                = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_halt;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_to_reg 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_to_reg;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
                = vlSelfRef.top__DOT__cpu__DOT__alu_out;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_halt 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_halt;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_halt 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_halt;
        }
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state;
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived) 
             & (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0x32U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[0U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[1U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[2U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__din[3U];
        } else if ((0U < vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter)) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                = (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                   - (IData)(1U));
        } else {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        }
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_mispredicted))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_halt = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data 
            = vlSelfRef.top__DOT__cpu__DOT__rs1_dout;
        if (vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel) {
            vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc = 0U;
        } else {
            vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op 
                = vlSelfRef.top__DOT__cpu__DOT__alu_op;
            vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc 
                = vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc;
        }
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data 
            = vlSelfRef.top__DOT__cpu__DOT__rs2_dout;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_src));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__is_branch));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xfU));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_write));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_read));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_to_reg 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__pc_to_reg));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_to_reg));
        if (vlSelfRef.top__DOT__cpu__DOT__IF_ID_write) {
            vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc 
                = vlSelfRef.top__DOT__cpu__DOT__current_pc;
        }
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_halt = 
            ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall) 
             & ((0xaU == vlSelfRef.print_reg[0x11U]) 
                | (((0x11U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
                    & (0xaU == vlSelfRef.top__DOT__cpu__DOT__alu_out)) 
                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write))));
    }
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__bhsr 
        = __Vdly__top__DOT__cpu__DOT__gshare__DOT__bhsr;
    if (__VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v0) {
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__gshare__DOT__btb__v32) {
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[__VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__btb__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__btb__v32;
    }
    if (__VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v0) {
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32) {
        vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[__VdlyDim0__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__gshare__DOT__tag_table__v32;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__total_count 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__total_count;
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][3U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][3U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][3U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][3U][3U] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][0U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][1U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][2U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][3U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[3U];
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_count 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__hit_count;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_count 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__miss_count;
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[3U][3U] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank[__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty_bank__v16;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[3U][3U] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank[__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid_bank__v16] = 1U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[3U][3U] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][0U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][1U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][2U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][3U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U];
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[0U][3U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[1U][3U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[2U][3U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[3U][3U][3U] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64][__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v64][0U] = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65][0U][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v65] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66][__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v66][1U] = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67][1U][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v67] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68][__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v68][2U] = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69][2U][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v69] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70][__VdlyDim1__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v70][3U] = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__lru_matrix[__VdlyDim2__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71][3U][__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__lru_matrix__v71] = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__din = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__gshare__update_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal) 
              | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__is_input_valid = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read) 
         | (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__rs2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelfRef.top__DOT__cpu__DOT__wb_data = ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                              ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1
                                              : vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2);
    vlSelfRef.is_halted = vlSelfRef.top__DOT__cpu__DOT__final_halt;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_valid 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__gshare__update_valid;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelfRef.top__DOT__cpu__DOT__is_input_valid;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__is_ready = (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__addr 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset 
        = (3U & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
                 >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag = 
        (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
         >> 6U);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx = 
        (3U & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
               >> 4U));
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_output_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
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
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[0U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[1U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[1U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[2U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[2U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[3U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata[3U];
    vlSelfRef.top__DOT__cpu__DOT__current_pc = __Vdly__top__DOT__cpu__DOT__current_pc;
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
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pc 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_idx 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc 
                    >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_tag 
        = (vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc >> 7U);
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx 
        = (0x7fU & ((vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc 
                     >> 2U) ^ (IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__bhsr)));
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__current_pc, 2U);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dout 
        = vlSelfRef.top__DOT__cpu__DOT__mem_dout;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_output_valid 
        = vlSelfRef.top__DOT__cpu__DOT__is_output_valid;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req;
    top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid 
        = top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived 
        = top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__is_input_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0U;
    if (vlSelfRef.clk) {
        if (vlSelfRef.reset) {
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
            __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write) 
                & (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd)))) {
        __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd_din;
        __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
        __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 1U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
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
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[__VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT____Vcellinp__gshare__pc;
    top__DOT__cpu__DOT____Vcellinp__gshare__pc = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd_din 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg)
            ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc)
            : vlSelfRef.top__DOT__cpu__DOT__wb_data);
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd_din;
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)))) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write 
            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    }
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_mispredicted))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd = 0U;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel))) 
               && (IData)(vlSelfRef.top__DOT__cpu__DOT__reg_write));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd = (0x1fU 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U));
        if (vlSelfRef.top__DOT__cpu__DOT__IF_ID_write) {
            vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                = vlSelfRef.top__DOT__cpu__DOT__inst;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
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
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__forwardA 
        = vlSelfRef.top__DOT__cpu__DOT__forwardA;
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
    vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__forwardB 
        = vlSelfRef.top__DOT__cpu__DOT__forwardB;
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
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_1;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src)
                                               ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm
                                               : vlSelfRef.top__DOT__cpu__DOT__alu_in_2_pre);
    vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_rd 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
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
    vlSelfRef.top__DOT__cpu__DOT__inst = vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelfRef.top__DOT__cpu__DOT__cache_busy = ((~ 
                                                 ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit) 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready))) 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_input_valid));
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
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__inst;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
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
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst);
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
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_target 
        = vlSelfRef.top__DOT__cpu__DOT__correct_pc;
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
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache_busy)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__pc_write));
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
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__pc_write 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write;
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
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc = top__DOT__cpu__DOT____Vcellinp__gshare__pc;
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_taken 
        = (2U <= vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht
           [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_idx]);
    vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_match 
        = (vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_tag 
           == vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table
           [vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_idx]);
    vlSelfRef.top__DOT__cpu__DOT__gshare_predict_taken 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_taken) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_match));
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

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__rs1_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0xfU))];
    vlSelfRef.top__DOT__cpu__DOT__rs2_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_dout;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs2_dout;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top.v", 4, "", "Active region did not converge.");
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
