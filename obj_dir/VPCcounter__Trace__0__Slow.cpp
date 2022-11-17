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
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBit(c+4,"rst", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+6,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->pushNamePrefix("PCcounter ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBit(c+4,"rst", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+6,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBus(c+9,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+10,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"addr", false,-1, 31,0);
    tracep->declBus(c+8,"dout", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+-1), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_counter ");
    tracep->declBus(c+10,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBit(c+4,"rst", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+6,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+9,"next_PC", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array[1]),32);
    bufp->fullBit(oldp+3,(vlSelf->clk));
    bufp->fullBit(oldp+4,(vlSelf->rst));
    bufp->fullIData(oldp+5,(vlSelf->PC),32);
    bufp->fullIData(oldp+6,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+7,(vlSelf->PCsrc));
    bufp->fullIData(oldp+8,(vlSelf->instr),32);
    bufp->fullIData(oldp+9,(vlSelf->PCcounter__DOT__next_PC),32);
    bufp->fullIData(oldp+10,(0x20U),32);
}
