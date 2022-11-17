// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPCcounter__Syms.h"


void VPCcounter___024root__trace_chg_sub_0(VPCcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPCcounter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_chg_top_0\n"); );
    // Init
    VPCcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCcounter___024root*>(voidSelf);
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPCcounter___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPCcounter___024root__trace_chg_sub_0(VPCcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array[1]),32);
    }
    bufp->chgBit(oldp+2,(vlSelf->clk));
    bufp->chgBit(oldp+3,(vlSelf->rst));
    bufp->chgIData(oldp+4,(vlSelf->PC),32);
    bufp->chgIData(oldp+5,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+6,(vlSelf->PCsrc));
    bufp->chgIData(oldp+7,(vlSelf->instr),32);
    bufp->chgIData(oldp+8,(vlSelf->PCcounter__DOT__next_PC),32);
}

void VPCcounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root__trace_cleanup\n"); );
    // Init
    VPCcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCcounter___024root*>(voidSelf);
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
