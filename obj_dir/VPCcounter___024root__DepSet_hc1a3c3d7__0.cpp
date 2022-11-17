// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCcounter.h for the primary calling header

#include "verilated.h"

#include "VPCcounter___024root.h"

VL_INLINE_OPT void VPCcounter___024root___sequent__TOP__0(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PCcounter__DOT__next_PC = ((IData)(vlSelf->rst)
                                        ? 0U : ((IData)(vlSelf->PCsrc)
                                                 ? 
                                                (vlSelf->PC 
                                                 + vlSelf->ImmOp)
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->PC)));
    vlSelf->instr = vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array
        [(1U & ((IData)(1U) + vlSelf->PCcounter__DOT__next_PC))];
}

void VPCcounter___024root___eval(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPCcounter___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VPCcounter___024root___eval_debug_assertions(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
}
#endif  // VL_DEBUG
