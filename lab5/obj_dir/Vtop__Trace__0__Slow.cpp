// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+106,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"forwardA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+109,0,"forwardB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"imm_gen_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"mem_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"rs1_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"rs2_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"gshare_predict_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"actual_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"branch_mispredicted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"gshare_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"gshare_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"correct_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"is_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"is_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"is_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cache_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"IF_ID_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"IF_ID_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"IF_ID_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"ID_EX_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"ID_EX_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ID_EX_alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"ID_EX_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"ID_EX_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ID_EX_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ID_EX_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"ID_EX_pc_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"ID_EX_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"ID_EX_is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"ID_EX_is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"ID_EX_is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"alu_bcond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"ID_EX_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"ID_EX_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"ID_EX_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"ID_EX_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"ID_EX_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+148,0,"EX_MEM_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"EX_MEM_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"EX_MEM_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"EX_MEM_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EX_MEM_pc_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"EX_MEM_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"EX_MEM_alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"EX_MEM_dmem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+157,0,"MEM_WB_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"MEM_WB_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"MEM_WB_pc_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"MEM_WB_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"MEM_WB_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+162,0,"MEM_WB_mem_to_reg_src_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"MEM_WB_mem_to_reg_src_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"alu_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"alu_in_2_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"alu_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"pc_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+176,0,"ID_EX_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"EX_MEM_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"MEM_WB_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"final_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"jalr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"jal_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+183,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"is_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"alu_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"alu_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"alu_bcond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+579,0,"LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"is_input_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"is_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"is_output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"is_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"total_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"hit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"miss_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"hit_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"miss_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+210,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+211,0,"word_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tag_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+212,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+213,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+214,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+215,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+216,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+217,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+218,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+219,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+220,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+221,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+222,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+223,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+224,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+225,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+226,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+227,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+228,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+232,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+236,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+240,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dirty_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+244,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+248,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+252,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+256,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+260,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+264,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+268,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+272,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+276,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+280,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+284,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+288,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+292,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+296,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+300,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+304,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+308,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+312,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+316,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+320,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+324,0,"mem_read_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"mem_write_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+327,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+331,0,"mem_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"way_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+334,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+335,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+336,0,"selected_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+340,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+341,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+342,0,"cache_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+346,0,"cache_dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"cache_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"write_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+349,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+350,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+351,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+352,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"is_input_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+356,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+358,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+362,0,"is_output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+363,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+367,0,"mem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+369,0,"delay_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"request_arrived",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+372,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+373,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"is_lru",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+375,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+377,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+378,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+379,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+380,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+385,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"is_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"pc_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("forwarding", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+391,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+392,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+393,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+394,0,"MEM_WB_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+395,0,"EX_MEM_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"MEM_WB_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"forwardA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+398,0,"forwardB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("gshare", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+583,0,"GHR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"PC_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"PC_INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"PHT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+399,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+402,0,"update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+405,0,"update_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+407,0,"predict_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"bhsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("btb", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+409+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tag_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+441+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 24,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+473,0,"pc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+474,0,"pc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+475,0,"update_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+476,0,"update_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+477,0,"pht_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+478,0,"update_pht_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+479,0,"tag_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"pht_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+481,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("hazard_detector", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+482,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+483,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+484,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+485,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+486,0,"ID_EX_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"ID_EX_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"IF_ID_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"ID_EX_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+491,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+496,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+497,0,"part_of_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"imm_gen_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+503,0,"pc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+505,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+508,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+509,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+510,0,"rd_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+511,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"rs1_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"rs2_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+514+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+546,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+547+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+579,(0x10U),32);
    bufp->fullIData(oldp+580,(4U),32);
    bufp->fullIData(oldp+581,(0x4000U),32);
    bufp->fullIData(oldp+582,(0x32U),32);
    bufp->fullIData(oldp+583,(7U),32);
    bufp->fullIData(oldp+584,(0x19U),32);
    bufp->fullIData(oldp+585,(5U),32);
    bufp->fullIData(oldp+586,(0x80U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.reset));
    bufp->fullBit(oldp+2,(vlSelfRef.clk));
    bufp->fullBit(oldp+3,(vlSelfRef.is_halted));
    bufp->fullIData(oldp+4,(vlSelfRef.print_reg[0]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.print_reg[1]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.print_reg[2]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.print_reg[3]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.print_reg[4]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.print_reg[5]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.print_reg[6]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.print_reg[7]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.print_reg[8]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.print_reg[9]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.print_reg[10]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.print_reg[11]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.print_reg[12]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.print_reg[13]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.print_reg[14]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.print_reg[15]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.print_reg[16]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.print_reg[17]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.print_reg[18]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.print_reg[19]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.print_reg[20]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.print_reg[21]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.print_reg[22]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.print_reg[23]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.print_reg[24]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.print_reg[25]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.print_reg[26]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.print_reg[27]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.print_reg[28]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.print_reg[29]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.print_reg[30]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.print_reg[31]),32);
    bufp->fullBit(oldp+36,(vlSelfRef.top__DOT__reset));
    bufp->fullBit(oldp+37,(vlSelfRef.top__DOT__clk));
    bufp->fullBit(oldp+38,(vlSelfRef.top__DOT__is_halted));
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+71,(vlSelfRef.top__DOT__cpu__DOT__reset));
    bufp->fullBit(oldp+72,(vlSelfRef.top__DOT__cpu__DOT__clk));
    bufp->fullBit(oldp+73,(vlSelfRef.top__DOT__cpu__DOT__is_halted));
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__cpu__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__cpu__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__cpu__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__cpu__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__cpu__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__cpu__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__cpu__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__cpu__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top__DOT__cpu__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__cpu__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__cpu__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__cpu__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__cpu__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__cpu__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__cpu__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top__DOT__cpu__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__cpu__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__cpu__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__cpu__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top__DOT__cpu__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top__DOT__cpu__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__cpu__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__cpu__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__cpu__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.top__DOT__cpu__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__cpu__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__cpu__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__cpu__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__cpu__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+106,(vlSelfRef.top__DOT__cpu__DOT__pc_write));
    bufp->fullBit(oldp+107,(vlSelfRef.top__DOT__cpu__DOT__is_ecall));
    bufp->fullCData(oldp+108,(vlSelfRef.top__DOT__cpu__DOT__forwardA),2);
    bufp->fullCData(oldp+109,(vlSelfRef.top__DOT__cpu__DOT__forwardB),2);
    bufp->fullIData(oldp+110,(vlSelfRef.top__DOT__cpu__DOT__current_pc),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top__DOT__cpu__DOT__imm_gen_out),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top__DOT__cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+113,(vlSelfRef.top__DOT__cpu__DOT__mem_dout),32);
    bufp->fullIData(oldp+114,(vlSelfRef.top__DOT__cpu__DOT__rs1_dout),32);
    bufp->fullIData(oldp+115,(vlSelfRef.top__DOT__cpu__DOT__rs2_dout),32);
    bufp->fullBit(oldp+116,(vlSelfRef.top__DOT__cpu__DOT__gshare_predict_taken));
    bufp->fullBit(oldp+117,(vlSelfRef.top__DOT__cpu__DOT__actual_taken));
    bufp->fullBit(oldp+118,(vlSelfRef.top__DOT__cpu__DOT__branch_mispredicted));
    bufp->fullBit(oldp+119,(vlSelfRef.top__DOT__cpu__DOT__gshare_enable));
    bufp->fullIData(oldp+120,(vlSelfRef.top__DOT__cpu__DOT__gshare_next_pc),32);
    bufp->fullIData(oldp+121,(vlSelfRef.top__DOT__cpu__DOT__correct_pc),32);
    bufp->fullBit(oldp+122,(vlSelfRef.top__DOT__cpu__DOT__is_ready));
    bufp->fullBit(oldp+123,(vlSelfRef.top__DOT__cpu__DOT__is_output_valid));
    bufp->fullBit(oldp+124,(vlSelfRef.top__DOT__cpu__DOT__is_hit));
    bufp->fullBit(oldp+125,(vlSelfRef.top__DOT__cpu__DOT__cache_busy));
    bufp->fullIData(oldp+126,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->fullBit(oldp+127,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_write));
    bufp->fullIData(oldp+128,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->fullBit(oldp+129,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_sel));
    bufp->fullCData(oldp+130,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op),4);
    bufp->fullBit(oldp+131,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src));
    bufp->fullBit(oldp+132,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write));
    bufp->fullBit(oldp+133,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read));
    bufp->fullBit(oldp+134,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg));
    bufp->fullBit(oldp+135,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write));
    bufp->fullBit(oldp+136,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_to_reg));
    bufp->fullIData(oldp+137,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc),32);
    bufp->fullBit(oldp+138,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr));
    bufp->fullBit(oldp+139,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal));
    bufp->fullBit(oldp+140,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch));
    bufp->fullBit(oldp+141,(vlSelfRef.top__DOT__cpu__DOT__alu_bcond));
    bufp->fullIData(oldp+142,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data),32);
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data),32);
    bufp->fullIData(oldp+144,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm),32);
    bufp->fullCData(oldp+145,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd),5);
    bufp->fullCData(oldp+146,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1),5);
    bufp->fullCData(oldp+147,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2),5);
    bufp->fullBit(oldp+148,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write));
    bufp->fullBit(oldp+149,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read));
    bufp->fullBit(oldp+150,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg));
    bufp->fullBit(oldp+151,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write));
    bufp->fullBit(oldp+152,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_to_reg));
    bufp->fullIData(oldp+153,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out),32);
    bufp->fullIData(oldp+155,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data),32);
    bufp->fullCData(oldp+156,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd),5);
    bufp->fullBit(oldp+157,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg));
    bufp->fullBit(oldp+158,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write));
    bufp->fullBit(oldp+159,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg));
    bufp->fullIData(oldp+160,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc),32);
    bufp->fullCData(oldp+161,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd),5);
    bufp->fullIData(oldp+162,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1),32);
    bufp->fullIData(oldp+163,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2),32);
    bufp->fullIData(oldp+164,(vlSelfRef.top__DOT__cpu__DOT__alu_in_1),32);
    bufp->fullIData(oldp+165,(vlSelfRef.top__DOT__cpu__DOT__alu_in_2_pre),32);
    bufp->fullIData(oldp+166,(vlSelfRef.top__DOT__cpu__DOT__alu_in_2),32);
    bufp->fullIData(oldp+167,(vlSelfRef.top__DOT__cpu__DOT__wb_data),32);
    bufp->fullIData(oldp+168,(vlSelfRef.top__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+169,(vlSelfRef.top__DOT__cpu__DOT__mem_read));
    bufp->fullBit(oldp+170,(vlSelfRef.top__DOT__cpu__DOT__mem_to_reg));
    bufp->fullBit(oldp+171,(vlSelfRef.top__DOT__cpu__DOT__mem_write));
    bufp->fullBit(oldp+172,(vlSelfRef.top__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+173,(vlSelfRef.top__DOT__cpu__DOT__alu_src));
    bufp->fullBit(oldp+174,(vlSelfRef.top__DOT__cpu__DOT__pc_to_reg));
    bufp->fullCData(oldp+175,(vlSelfRef.top__DOT__cpu__DOT__alu_op),4);
    bufp->fullBit(oldp+176,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_halt));
    bufp->fullBit(oldp+177,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_halt));
    bufp->fullBit(oldp+178,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_halt));
    bufp->fullBit(oldp+179,(vlSelfRef.top__DOT__cpu__DOT__final_halt));
    bufp->fullIData(oldp+180,(vlSelfRef.top__DOT__cpu__DOT__jalr_pc),32);
    bufp->fullIData(oldp+181,(vlSelfRef.top__DOT__cpu__DOT__jal_pc),32);
    bufp->fullIData(oldp+182,(vlSelfRef.top__DOT__cpu__DOT__next_pc),32);
    bufp->fullBit(oldp+183,(vlSelfRef.top__DOT__cpu__DOT__is_jal));
    bufp->fullBit(oldp+184,(vlSelfRef.top__DOT__cpu__DOT__is_jalr));
    bufp->fullBit(oldp+185,(vlSelfRef.top__DOT__cpu__DOT__is_branch));
    bufp->fullBit(oldp+186,(vlSelfRef.top__DOT__cpu__DOT__is_input_valid));
    bufp->fullCData(oldp+187,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_op),4);
    bufp->fullIData(oldp+188,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1),32);
    bufp->fullIData(oldp+189,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_2),32);
    bufp->fullIData(oldp+190,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_result),32);
    bufp->fullBit(oldp+191,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond));
    bufp->fullCData(oldp+192,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__shamt),5);
    bufp->fullBit(oldp+193,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset));
    bufp->fullBit(oldp+194,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk));
    bufp->fullBit(oldp+195,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_input_valid));
    bufp->fullIData(oldp+196,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__addr),32);
    bufp->fullBit(oldp+197,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read));
    bufp->fullBit(oldp+198,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write));
    bufp->fullIData(oldp+199,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__din),32);
    bufp->fullBit(oldp+200,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_ready));
    bufp->fullBit(oldp+201,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_output_valid));
    bufp->fullIData(oldp+202,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dout),32);
    bufp->fullBit(oldp+203,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_hit));
    bufp->fullIData(oldp+204,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__total_count),32);
    bufp->fullIData(oldp+205,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_count),32);
    bufp->fullIData(oldp+206,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_count),32);
    bufp->fullBit(oldp+207,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_event));
    bufp->fullBit(oldp+208,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_event));
    bufp->fullIData(oldp+209,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag),26);
    bufp->fullCData(oldp+210,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx),2);
    bufp->fullCData(oldp+211,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__word_offset),2);
    bufp->fullIData(oldp+212,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][0U]),26);
    bufp->fullIData(oldp+213,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][1U]),26);
    bufp->fullIData(oldp+214,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][2U]),26);
    bufp->fullIData(oldp+215,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][3U]),26);
    bufp->fullIData(oldp+216,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][0U]),26);
    bufp->fullIData(oldp+217,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][1U]),26);
    bufp->fullIData(oldp+218,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][2U]),26);
    bufp->fullIData(oldp+219,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][3U]),26);
    bufp->fullIData(oldp+220,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][0U]),26);
    bufp->fullIData(oldp+221,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][1U]),26);
    bufp->fullIData(oldp+222,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][2U]),26);
    bufp->fullIData(oldp+223,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][3U]),26);
    bufp->fullIData(oldp+224,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][0U]),26);
    bufp->fullIData(oldp+225,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][1U]),26);
    bufp->fullIData(oldp+226,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][2U]),26);
    bufp->fullIData(oldp+227,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][3U]),26);
    bufp->fullBit(oldp+228,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [0U][0U]));
    bufp->fullBit(oldp+229,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [0U][1U]));
    bufp->fullBit(oldp+230,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [0U][2U]));
    bufp->fullBit(oldp+231,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [0U][3U]));
    bufp->fullBit(oldp+232,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [1U][0U]));
    bufp->fullBit(oldp+233,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [1U][1U]));
    bufp->fullBit(oldp+234,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [1U][2U]));
    bufp->fullBit(oldp+235,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [1U][3U]));
    bufp->fullBit(oldp+236,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [2U][0U]));
    bufp->fullBit(oldp+237,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [2U][1U]));
    bufp->fullBit(oldp+238,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [2U][2U]));
    bufp->fullBit(oldp+239,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [2U][3U]));
    bufp->fullBit(oldp+240,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [3U][0U]));
    bufp->fullBit(oldp+241,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [3U][1U]));
    bufp->fullBit(oldp+242,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [3U][2U]));
    bufp->fullBit(oldp+243,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid_bank
                            [3U][3U]));
    bufp->fullBit(oldp+244,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [0U][0U]));
    bufp->fullBit(oldp+245,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [0U][1U]));
    bufp->fullBit(oldp+246,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [0U][2U]));
    bufp->fullBit(oldp+247,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [0U][3U]));
    bufp->fullBit(oldp+248,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [1U][0U]));
    bufp->fullBit(oldp+249,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [1U][1U]));
    bufp->fullBit(oldp+250,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [1U][2U]));
    bufp->fullBit(oldp+251,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [1U][3U]));
    bufp->fullBit(oldp+252,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [2U][0U]));
    bufp->fullBit(oldp+253,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [2U][1U]));
    bufp->fullBit(oldp+254,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [2U][2U]));
    bufp->fullBit(oldp+255,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [2U][3U]));
    bufp->fullBit(oldp+256,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [3U][0U]));
    bufp->fullBit(oldp+257,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [3U][1U]));
    bufp->fullBit(oldp+258,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [3U][2U]));
    bufp->fullBit(oldp+259,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty_bank
                            [3U][3U]));
    bufp->fullWData(oldp+260,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][0U]),128);
    bufp->fullWData(oldp+264,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][1U]),128);
    bufp->fullWData(oldp+268,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][2U]),128);
    bufp->fullWData(oldp+272,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][3U]),128);
    bufp->fullWData(oldp+276,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][0U]),128);
    bufp->fullWData(oldp+280,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][1U]),128);
    bufp->fullWData(oldp+284,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][2U]),128);
    bufp->fullWData(oldp+288,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][3U]),128);
    bufp->fullWData(oldp+292,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][0U]),128);
    bufp->fullWData(oldp+296,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][1U]),128);
    bufp->fullWData(oldp+300,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][2U]),128);
    bufp->fullWData(oldp+304,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][3U]),128);
    bufp->fullWData(oldp+308,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][0U]),128);
    bufp->fullWData(oldp+312,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][1U]),128);
    bufp->fullWData(oldp+316,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][2U]),128);
    bufp->fullWData(oldp+320,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][3U]),128);
    bufp->fullBit(oldp+324,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read_req));
    bufp->fullBit(oldp+325,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write_req));
    bufp->fullIData(oldp+326,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr),32);
    bufp->fullWData(oldp+327,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_rdata),128);
    bufp->fullBit(oldp+331,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_output_valid));
    bufp->fullBit(oldp+332,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_ready));
    bufp->fullCData(oldp+333,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__way_hit),4);
    bufp->fullCData(oldp+334,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_way),2);
    bufp->fullCData(oldp+335,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__replace_way),2);
    bufp->fullWData(oldp+336,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__selected_line),128);
    bufp->fullCData(oldp+340,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state),2);
    bufp->fullCData(oldp+341,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state),2);
    bufp->fullWData(oldp+342,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_in),128);
    bufp->fullBit(oldp+346,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_dirty));
    bufp->fullBit(oldp+347,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_write));
    bufp->fullCData(oldp+348,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__write_way),2);
    bufp->fullIData(oldp+349,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i),32);
    bufp->fullIData(oldp+350,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j),32);
    bufp->fullIData(oldp+351,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__k),32);
    bufp->fullBit(oldp+352,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset));
    bufp->fullBit(oldp+353,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk));
    bufp->fullBit(oldp+354,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid));
    bufp->fullIData(oldp+355,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr),32);
    bufp->fullBit(oldp+356,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read));
    bufp->fullBit(oldp+357,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write));
    bufp->fullWData(oldp+358,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din),128);
    bufp->fullBit(oldp+362,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid));
    bufp->fullWData(oldp+363,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout),128);
    bufp->fullBit(oldp+367,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready));
    bufp->fullIData(oldp+368,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i),32);
    bufp->fullIData(oldp+369,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter),32);
    bufp->fullBit(oldp+370,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived));
    bufp->fullIData(oldp+371,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk1__DOT__w),32);
    bufp->fullIData(oldp+372,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+373,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+374,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__is_lru));
    bufp->fullIData(oldp+375,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+376,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__unnamedblk6__DOT__i),32);
    bufp->fullCData(oldp+377,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode),7);
    bufp->fullCData(oldp+378,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__funct3),3);
    bufp->fullCData(oldp+379,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__funct7),7);
    bufp->fullBit(oldp+380,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read));
    bufp->fullBit(oldp+381,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg));
    bufp->fullBit(oldp+382,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write));
    bufp->fullBit(oldp+383,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write));
    bufp->fullCData(oldp+384,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op),4);
    bufp->fullBit(oldp+385,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src));
    bufp->fullBit(oldp+386,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal));
    bufp->fullBit(oldp+387,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr));
    bufp->fullBit(oldp+388,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_branch));
    bufp->fullBit(oldp+389,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg));
    bufp->fullBit(oldp+390,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall));
    bufp->fullCData(oldp+391,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__rs1),5);
    bufp->fullCData(oldp+392,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__rs2),5);
    bufp->fullCData(oldp+393,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_rd),5);
    bufp->fullCData(oldp+394,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_rd),5);
    bufp->fullBit(oldp+395,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__EX_MEM_reg_write));
    bufp->fullBit(oldp+396,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__MEM_WB_reg_write));
    bufp->fullCData(oldp+397,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__forwardA),2);
    bufp->fullCData(oldp+398,(vlSelfRef.top__DOT__cpu__DOT__forwarding__DOT__forwardB),2);
    bufp->fullBit(oldp+399,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__clk));
    bufp->fullBit(oldp+400,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__reset));
    bufp->fullIData(oldp+401,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc),32);
    bufp->fullBit(oldp+402,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_valid));
    bufp->fullIData(oldp+403,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pc),32);
    bufp->fullIData(oldp+404,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_target),32);
    bufp->fullBit(oldp+405,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_taken));
    bufp->fullIData(oldp+406,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__next_pc),32);
    bufp->fullBit(oldp+407,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__predict_taken));
    bufp->fullCData(oldp+408,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__bhsr),7);
    bufp->fullIData(oldp+409,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[0]),32);
    bufp->fullIData(oldp+410,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[1]),32);
    bufp->fullIData(oldp+411,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[2]),32);
    bufp->fullIData(oldp+412,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[3]),32);
    bufp->fullIData(oldp+413,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[4]),32);
    bufp->fullIData(oldp+414,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[5]),32);
    bufp->fullIData(oldp+415,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[6]),32);
    bufp->fullIData(oldp+416,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[7]),32);
    bufp->fullIData(oldp+417,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[8]),32);
    bufp->fullIData(oldp+418,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[9]),32);
    bufp->fullIData(oldp+419,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[10]),32);
    bufp->fullIData(oldp+420,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[11]),32);
    bufp->fullIData(oldp+421,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[12]),32);
    bufp->fullIData(oldp+422,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[13]),32);
    bufp->fullIData(oldp+423,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[14]),32);
    bufp->fullIData(oldp+424,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[15]),32);
    bufp->fullIData(oldp+425,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[16]),32);
    bufp->fullIData(oldp+426,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[17]),32);
    bufp->fullIData(oldp+427,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[18]),32);
    bufp->fullIData(oldp+428,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[19]),32);
    bufp->fullIData(oldp+429,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[20]),32);
    bufp->fullIData(oldp+430,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[21]),32);
    bufp->fullIData(oldp+431,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[22]),32);
    bufp->fullIData(oldp+432,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[23]),32);
    bufp->fullIData(oldp+433,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[24]),32);
    bufp->fullIData(oldp+434,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[25]),32);
    bufp->fullIData(oldp+435,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[26]),32);
    bufp->fullIData(oldp+436,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[27]),32);
    bufp->fullIData(oldp+437,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[28]),32);
    bufp->fullIData(oldp+438,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[29]),32);
    bufp->fullIData(oldp+439,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[30]),32);
    bufp->fullIData(oldp+440,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__btb[31]),32);
    bufp->fullIData(oldp+441,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[0]),25);
    bufp->fullIData(oldp+442,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[1]),25);
    bufp->fullIData(oldp+443,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[2]),25);
    bufp->fullIData(oldp+444,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[3]),25);
    bufp->fullIData(oldp+445,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[4]),25);
    bufp->fullIData(oldp+446,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[5]),25);
    bufp->fullIData(oldp+447,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[6]),25);
    bufp->fullIData(oldp+448,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[7]),25);
    bufp->fullIData(oldp+449,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[8]),25);
    bufp->fullIData(oldp+450,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[9]),25);
    bufp->fullIData(oldp+451,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[10]),25);
    bufp->fullIData(oldp+452,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[11]),25);
    bufp->fullIData(oldp+453,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[12]),25);
    bufp->fullIData(oldp+454,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[13]),25);
    bufp->fullIData(oldp+455,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[14]),25);
    bufp->fullIData(oldp+456,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[15]),25);
    bufp->fullIData(oldp+457,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[16]),25);
    bufp->fullIData(oldp+458,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[17]),25);
    bufp->fullIData(oldp+459,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[18]),25);
    bufp->fullIData(oldp+460,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[19]),25);
    bufp->fullIData(oldp+461,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[20]),25);
    bufp->fullIData(oldp+462,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[21]),25);
    bufp->fullIData(oldp+463,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[22]),25);
    bufp->fullIData(oldp+464,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[23]),25);
    bufp->fullIData(oldp+465,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[24]),25);
    bufp->fullIData(oldp+466,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[25]),25);
    bufp->fullIData(oldp+467,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[26]),25);
    bufp->fullIData(oldp+468,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[27]),25);
    bufp->fullIData(oldp+469,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[28]),25);
    bufp->fullIData(oldp+470,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[29]),25);
    bufp->fullIData(oldp+471,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[30]),25);
    bufp->fullIData(oldp+472,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_table[31]),25);
    bufp->fullCData(oldp+473,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_idx),5);
    bufp->fullIData(oldp+474,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pc_tag),25);
    bufp->fullCData(oldp+475,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_idx),5);
    bufp->fullIData(oldp+476,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_tag),25);
    bufp->fullCData(oldp+477,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_idx),7);
    bufp->fullCData(oldp+478,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__update_pht_idx),7);
    bufp->fullBit(oldp+479,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__tag_match));
    bufp->fullBit(oldp+480,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__pht_taken));
    bufp->fullIData(oldp+481,(vlSelfRef.top__DOT__cpu__DOT__gshare__DOT__i),32);
    bufp->fullCData(oldp+482,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__rs1),5);
    bufp->fullCData(oldp+483,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__rs2),5);
    bufp->fullCData(oldp+484,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__opcode),7);
    bufp->fullCData(oldp+485,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_rd),5);
    bufp->fullBit(oldp+486,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_mem_read));
    bufp->fullBit(oldp+487,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_reg_write));
    bufp->fullBit(oldp+488,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__pc_write));
    bufp->fullBit(oldp+489,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__IF_ID_write));
    bufp->fullBit(oldp+490,(vlSelfRef.top__DOT__cpu__DOT__hazard_detector__DOT__ID_EX_sel));
    bufp->fullBit(oldp+491,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__reset));
    bufp->fullBit(oldp+492,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__clk));
    bufp->fullIData(oldp+493,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr),32);
    bufp->fullIData(oldp+494,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout),32);
    bufp->fullIData(oldp+495,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i),32);
    bufp->fullIData(oldp+496,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr),32);
    bufp->fullIData(oldp+497,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst),32);
    bufp->fullIData(oldp+498,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out),32);
    bufp->fullCData(oldp+499,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode),7);
    bufp->fullBit(oldp+500,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset));
    bufp->fullBit(oldp+501,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk));
    bufp->fullIData(oldp+502,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc),32);
    bufp->fullBit(oldp+503,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__pc_write));
    bufp->fullIData(oldp+504,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc),32);
    bufp->fullBit(oldp+505,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset));
    bufp->fullBit(oldp+506,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk));
    bufp->fullCData(oldp+507,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1),5);
    bufp->fullCData(oldp+508,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2),5);
    bufp->fullCData(oldp+509,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd),5);
    bufp->fullIData(oldp+510,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din),32);
    bufp->fullBit(oldp+511,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable));
    bufp->fullIData(oldp+512,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout),32);
    bufp->fullIData(oldp+513,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout),32);
    bufp->fullIData(oldp+514,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+515,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+516,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+517,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+518,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+519,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+520,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+521,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+522,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+523,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+524,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+525,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+526,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+527,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+528,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+529,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+530,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+531,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+532,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+533,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+534,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+535,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+536,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+537,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+538,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+539,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+540,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+541,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+542,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+543,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+544,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+545,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+546,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i),32);
    bufp->fullIData(oldp+547,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+548,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+549,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+550,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+551,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+552,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+553,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+554,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+555,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+556,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+557,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+558,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+559,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+560,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+561,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+562,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+563,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+564,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+565,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+566,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+567,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+568,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+569,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+570,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+571,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+572,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+573,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+574,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+575,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+576,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+577,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+578,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[31]),32);
}
