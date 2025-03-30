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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hb422b802_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h8cab890c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hffc94ff4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h7581e136_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hc701609c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_ha22840e8_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hfb65ae0a_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h13831e5c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h6c3535cd_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_he9dc95fe_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h3365884a_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hc5648860_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h392fe9c9_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h599920f2_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h20bed79b_0;
extern const VlUnpacked<CData/*3:0*/, 4096> Vtop__ConstPool__TABLE_h8b497016_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT____Vcellinp__memory__addr;
    top__DOT__cpu__DOT____Vcellinp__memory__addr = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*11:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__din 
        = vlSelfRef.top__DOT__cpu__DOT__B;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__in3 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state)));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelfRef.top__DOT__cpu__DOT__IR;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelfRef.top__DOT__cpu__DOT__IR >> 0xcU));
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (1U & (vlSelfRef.top__DOT__cpu__DOT__IR >> 0x1eU));
    vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__ALUOut 
        = vlSelfRef.top__DOT__cpu__DOT__ALUOut;
    vlSelfRef.top__DOT__cpu__DOT__rd = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                 >> 7U));
    vlSelfRef.top__DOT__cpu__DOT__rs1 = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                  >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__rs2 = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                  >> 0x14U));
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__a 
        = ((0U == vlSelfRef.top__DOT__cpu__DOT__ALUOut)
            ? 0U : 1U);
    vlSelfRef.top__DOT__cpu__DOT__opcode = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IR);
    __Vtableidx1 = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__pc_write_cond = Vtop__ConstPool__TABLE_hb422b802_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__pc_write = Vtop__ConstPool__TABLE_h8cab890c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__IorD = Vtop__ConstPool__TABLE_hffc94ff4_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h7581e136_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_hc701609c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_ha22840e8_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__ir_write = Vtop__ConstPool__TABLE_hfb65ae0a_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__pc_src = Vtop__ConstPool__TABLE_h13831e5c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__alu_control = Vtop__ConstPool__TABLE_h6c3535cd_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__alu_srcB = Vtop__ConstPool__TABLE_he9dc95fe_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__alu_srcA = Vtop__ConstPool__TABLE_h3365884a_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__reg_write = Vtop__ConstPool__TABLE_hc5648860_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__addrctrl 
        = Vtop__ConstPool__TABLE_h392fe9c9_0[__Vtableidx1];
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
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = vlSelfRef.top__DOT__cpu__DOT__rd;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT__rs1;
    vlSelfRef.top__DOT__cpu__DOT__rs1_out = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelfRef.top__DOT__cpu__DOT__rs1];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = vlSelfRef.top__DOT__cpu__DOT__rs2;
    vlSelfRef.top__DOT__cpu__DOT__rs2_out = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelfRef.top__DOT__cpu__DOT__rs2];
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = (0x73U 
                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__opcode));
    __Vtableidx2 = vlSelfRef.top__DOT__cpu__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom1_ID 
        = Vtop__ConstPool__TABLE_h599920f2_0[__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom2_EX 
        = Vtop__ConstPool__TABLE_h20bed79b_0[__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ir_write 
        = vlSelfRef.top__DOT__cpu__DOT__ir_write;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__change_pc 
        = vlSelfRef.top__DOT__cpu__DOT__pc_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_write 
        = vlSelfRef.top__DOT__cpu__DOT__pc_write;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__mem_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__mem_write;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__reg_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__reg_write;
    if (vlSelfRef.top__DOT__cpu__DOT__mem_to_reg) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = 1U;
        vlSelfRef.top__DOT__cpu__DOT__wb_data = vlSelfRef.top__DOT__cpu__DOT__MDR;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb_data = vlSelfRef.top__DOT__cpu__DOT__ALUOut;
    }
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_src 
        = vlSelfRef.top__DOT__cpu__DOT__pc_src;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__mem_read;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__mem_read;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__addrctrl 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__addrctrl;
    if (vlSelfRef.top__DOT__cpu__DOT__IorD) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 1U;
        top__DOT__cpu__DOT____Vcellinp__memory__addr 
            = vlSelfRef.top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 0U;
        top__DOT__cpu__DOT____Vcellinp__memory__addr 
            = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    }
    if (vlSelfRef.top__DOT__cpu__DOT__alu_srcA) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcA = 1U;
        vlSelfRef.top__DOT__cpu__DOT__alu_in_1 = vlSelfRef.top__DOT__cpu__DOT__A;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcA = 0U;
        vlSelfRef.top__DOT__cpu__DOT__alu_in_1 = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    }
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    __Vtableidx3 = (((0x800U & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                >> 0x13U)) | (0x700U 
                                              & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                 >> 4U))) 
                    | (((IData)(vlSelfRef.top__DOT__cpu__DOT__opcode) 
                        << 1U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control)));
    vlSelfRef.top__DOT__cpu__DOT__alu_op = Vtop__ConstPool__TABLE_h8b497016_0
        [__Vtableidx3];
    if (vlSelfRef.top__DOT__cpu__DOT__pc_write_cond) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_write_cond = 1U;
        vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__pc_write_cond = 1U;
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcB 
            = vlSelfRef.top__DOT__cpu__DOT__alu_srcB;
        vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__alu_srcB 
            = vlSelfRef.top__DOT__cpu__DOT__alu_srcB;
        vlSelfRef.top__DOT__cpu__DOT__select = (3U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__a)));
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_write_cond = 0U;
        vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__pc_write_cond = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcB 
            = vlSelfRef.top__DOT__cpu__DOT__alu_srcB;
        vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__alu_srcB 
            = vlSelfRef.top__DOT__cpu__DOT__alu_srcB;
        vlSelfRef.top__DOT__cpu__DOT__select = (3U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_srcB));
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
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_out;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs2_out;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    vlSelfRef.is_halted = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall) 
                           & (0xaU == vlSelfRef.print_reg
                              [0x11U]));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__in1 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom1_ID;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__in2 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom2_EX;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state 
        = (0xfU & ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__addrctrl))
                    ? (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom1_ID)
                    : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__addrctrl))
                        ? (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom2_EX)
                        : ((3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__addrctrl))
                            ? ((IData)(1U) + (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state))
                            : 0U))));
    vlSelfRef.top__DOT__cpu__DOT__imm_value = ((0x40U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        ((((- (IData)(
                                                                      (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                       >> 0x1fU))) 
                                                           << 0x15U) 
                                                          | (0x100000U 
                                                             & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                >> 0xbU))) 
                                                         | (((0xff000U 
                                                              & vlSelfRef.top__DOT__cpu__DOT__IR) 
                                                             | (0x800U 
                                                                & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                   >> 9U))) 
                                                            | (0x7feU 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                  >> 0x14U))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xdU) 
                                                         | (((0x1000U 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                 >> 0x13U)) 
                                                             | (0x800U 
                                                                & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                   << 4U))) 
                                                            | ((0x7e0U 
                                                                & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                     >> 7U)))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((8U 
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
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((8U 
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
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)))));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT__wb_data;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__addrctrl 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__addrctrl;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__addr 
        = top__DOT__cpu__DOT____Vcellinp__memory__addr;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, top__DOT__cpu__DOT____Vcellinp__memory__addr, 2U);
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_1;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__result 
        = vlSelfRef.top__DOT__cpu__DOT__select;
    vlSelfRef.top__DOT__cpu__DOT__alu_src2__DOT__result_reg 
        = vlSelfRef.top__DOT__cpu__DOT__select;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__clk;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__next_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__next_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelfRef.top__DOT__cpu__DOT__imm_value;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__select))
                                               ? vlSelfRef.top__DOT__cpu__DOT__B
                                               : ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__select))
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__select))
                                                    ? vlSelfRef.top__DOT__cpu__DOT__imm_value
                                                    : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__mem_data = ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem_read)
                                               ? vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem
                                              [(0x3fffU 
                                                & vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                               : 0U);
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__next_state;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_2;
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = ((1U 
                                                & ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                                                   >> 3U)) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                                                        >> 2U))) 
                                                   && ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                         ? 
                                                        VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                         : 
                                                        VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                         ? 
                                                        (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                         != vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                         : 
                                                        (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                         == vlSelfRef.top__DOT__cpu__DOT__alu_in_2)))));
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__shamt = 
        (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__dout 
        = vlSelfRef.top__DOT__cpu__DOT__mem_data;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelfRef.top__DOT__cpu__DOT__alu_bcond;
    vlSelfRef.top__DOT__cpu__DOT__alu_result = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_result = ((8U 
                                                 & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    | vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    >> (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__shamt))
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    ^ vlSelfRef.top__DOT__cpu__DOT__alu_in_2)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    << (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__shamt))
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    - vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                                                    + vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                    : 0U))));
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__next_pc 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__pc_src)
            ? vlSelfRef.top__DOT__cpu__DOT__ALUOut : vlSelfRef.top__DOT__cpu__DOT__alu_result);
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__next_pc;
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
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__pc_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_write_cond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ir_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_srcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_srcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_control = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__select = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__rs1_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__change_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_write_cond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ir_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__addrctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__addrctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom1_ID = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__rom2_EX = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__in1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__in2 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__in3 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__addrctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__address_logic__DOT__mux__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__changeState__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu_src2__DOT__alu_srcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_src2__DOT__pc_write_cond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src2__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_src2__DOT__result = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_src2__DOT__result_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_src2__DOT__a = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
