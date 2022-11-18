// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCcounter.h for the primary calling header

#include "verilated.h"

#include "VPCcounter___024root.h"

VL_ATTR_COLD void VPCcounter___024root___initial__TOP__0(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_haf691150__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_haf691150__0[0U] = 0x2e6d656dU;
    __Vtemp_haf691150__0[1U] = 0x74696f6eU;
    __Vtemp_haf691150__0[2U] = 0x74727563U;
    __Vtemp_haf691150__0[3U] = 0x696e73U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_haf691150__0)
                 ,  &(vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPCcounter___024root___settle__TOP__0(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->instr = vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array
        [(0xffU & vlSelf->PCcounter__DOT__next_PC)];
}

VL_ATTR_COLD void VPCcounter___024root___eval_initial(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___eval_initial\n"); );
    // Body
    VPCcounter___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VPCcounter___024root___eval_settle(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___eval_settle\n"); );
    // Body
    VPCcounter___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPCcounter___024root___final(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___final\n"); );
}

VL_ATTR_COLD void VPCcounter___024root___ctor_var_reset(VPCcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCcounter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->PCcounter__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->PCcounter__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
}
