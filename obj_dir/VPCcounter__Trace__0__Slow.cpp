// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPCcounter__Syms.h"


VL_ATTR_COLD void VPCcounter___024root__trace_init_sub__TOP__0(VPCcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"instr", false,-1, 31,0);
    tracep->pushNamePrefix("PCcounter ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"instr", false,-1, 31,0);
    tracep->declBus(c+6,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+9,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"addr", false,-1, 7,0);
    tracep->declBus(c+5,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_counter ");
    tracep->declBus(c+8,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+6,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPCcounter___024root__trace_init_top(VPCcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_init_top\n"); );
    // Body
    VPCcounter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPCcounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPCcounter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPCcounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPCcounter___024root__trace_register(VPCcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPCcounter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPCcounter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPCcounter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPCcounter___024root__trace_full_sub_0(VPCcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPCcounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_full_top_0\n"); );
    // Init
    VPCcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCcounter___024root*>(voidSelf);
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPCcounter___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPCcounter___024root__trace_full_sub_0(VPCcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->PCsrc));
    bufp->fullIData(oldp+5,(vlSelf->instr),32);
    bufp->fullIData(oldp+6,(vlSelf->PCcounter__DOT__next_PC),32);
    bufp->fullCData(oldp+7,((0xffU & vlSelf->PCcounter__DOT__next_PC)),8);
    bufp->fullIData(oldp+8,(0x20U),32);
    bufp->fullIData(oldp+9,(8U),32);
}
