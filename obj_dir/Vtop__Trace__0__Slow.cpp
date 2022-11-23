// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+60,"a0", false,-1, 16,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+61,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"A_WIDTH", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+60,"a0", false,-1, 16,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBit(c+6,"ALUctrl", false,-1);
    tracep->declBit(c+7,"ALUsrc", false,-1);
    tracep->declBit(c+8,"ResultSrc", false,-1);
    tracep->declBus(c+9,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+63,"AD1", false,-1, 4,0);
    tracep->declBus(c+64,"AD2", false,-1, 4,0);
    tracep->declBus(c+65,"AD3", false,-1, 4,0);
    tracep->declBus(c+10,"RD1", false,-1, 31,0);
    tracep->declBus(c+11,"RD2", false,-1, 31,0);
    tracep->declBus(c+12,"ALUout", false,-1, 31,0);
    tracep->declBus(c+13,"instr", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 31,0);
    tracep->declBit(c+14,"Data_WE", false,-1);
    tracep->declBus(c+67,"Data_addr", false,-1, 31,0);
    tracep->declBus(c+15,"Data_RD", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+11,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+12,"ALUout", false,-1, 31,0);
    tracep->declBus(c+16,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+7,"ALUsrc", false,-1);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->declBus(c+17,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"wanted_width", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+14,"Data_WE", false,-1);
    tracep->declBus(c+12,"Data_addr", false,-1, 31,0);
    tracep->declBus(c+11,"Data_WD", false,-1, 31,0);
    tracep->declBus(c+15,"Data_RD", false,-1, 31,0);
    tracep->declBus(c+18,"short_addr", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("encoder ");
    tracep->declBus(c+61,"Wid", false,-1, 31,0);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->declBus(c+13,"instr", false,-1, 31,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBit(c+8,"ResultSrc", false,-1);
    tracep->declBit(c+7,"ALUsrc", false,-1);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->declBus(c+19,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+9,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+14,"Data_WE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extend ");
    tracep->declBus(c+61,"Width", false,-1, 31,0);
    tracep->declBus(c+13,"instr", false,-1, 31,0);
    tracep->declBus(c+9,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBus(c+20,"short_addr", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_counter ");
    tracep->declBus(c+61,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBus(c+61,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"A_WIDTH", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+5,"WE3", false,-1);
    tracep->declBit(c+8,"ResultSrc", false,-1);
    tracep->declBus(c+21,"AD1", false,-1, 4,0);
    tracep->declBus(c+22,"AD2", false,-1, 4,0);
    tracep->declBus(c+23,"AD3", false,-1, 4,0);
    tracep->declBus(c+12,"ALUout", false,-1, 31,0);
    tracep->declBus(c+15,"Data_RD", false,-1, 31,0);
    tracep->declBus(c+10,"RD1", false,-1, 31,0);
    tracep->declBus(c+11,"RD2", false,-1, 31,0);
    tracep->declBus(c+24,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+25+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+57,"WD3", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__PCsrc));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__EQ));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ALUctrl))));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ResultSrc));
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__ImmSrc),2);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__RD1),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__RD2),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ALUout),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__instr),32);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__Data_WE));
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__Data_RD),32);
    bufp->fullCData(oldp+16,((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ALUctrl))),3);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__ALU__DOT__ALUop2),32);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__data_mem__DOT__short_addr),10);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT____Vcellout__encoder__ALUctrl),3);
    bufp->fullCData(oldp+20,((0xffU & vlSelf->top__DOT__PC)),8);
    bufp->fullCData(oldp+21,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+22,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__register_file__DOT__reg_file
                             [0xaU]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__register_file__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__register_file__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__register_file__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__register_file__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__register_file__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__register_file__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__register_file__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__register_file__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__register_file__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__register_file__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__register_file__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__register_file__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__register_file__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__register_file__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__register_file__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__register_file__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__register_file__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__register_file__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__register_file__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__register_file__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__register_file__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__register_file__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__register_file__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__register_file__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__register_file__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__register_file__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__register_file__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__register_file__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__register_file__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__register_file__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__register_file__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__register_file__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+57,(((IData)(vlSelf->top__DOT__ResultSrc)
                               ? vlSelf->top__DOT__Data_RD
                               : vlSelf->top__DOT__ALUout)),32);
    bufp->fullBit(oldp+58,(vlSelf->clk));
    bufp->fullBit(oldp+59,(vlSelf->rst));
    bufp->fullIData(oldp+60,(vlSelf->a0),17);
    bufp->fullIData(oldp+61,(0x20U),32);
    bufp->fullIData(oldp+62,(5U),32);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__AD1),5);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__AD2),5);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__AD3),5);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__out),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__Data_addr),32);
    bufp->fullIData(oldp+68,(0xaU),32);
}
