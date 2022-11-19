// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__register_file__DOT__reg_file__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__register_file__DOT__reg_file__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__register_file__DOT__reg_file__v0;
    // Body
    __Vdlyvset__top__DOT__register_file__DOT__reg_file__v0 = 0U;
    if ((1U & (~ (vlSelf->top__DOT__instr >> 6U)))) {
        __Vdlyvval__top__DOT__register_file__DOT__reg_file__v0 
            = ((0x1000U & vlSelf->top__DOT__instr) ? 
               (vlSelf->top__DOT__RD1 + vlSelf->top__DOT__ALU__DOT__ALUop2)
                : (vlSelf->top__DOT__RD1 - vlSelf->top__DOT__ALU__DOT__ALUop2));
        __Vdlyvset__top__DOT__register_file__DOT__reg_file__v0 = 1U;
        __Vdlyvdim0__top__DOT__register_file__DOT__reg_file__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : ((0x10U & vlSelf->top__DOT__instr)
                                 ? (vlSelf->top__DOT__PC 
                                    + vlSelf->top__DOT__ImmOp)
                                 : ((IData)(4U) + vlSelf->top__DOT__PC)));
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    vlSelf->a0 = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xaU];
    if (__Vdlyvset__top__DOT__register_file__DOT__reg_file__v0) {
        vlSelf->top__DOT__register_file__DOT__reg_file[__Vdlyvdim0__top__DOT__register_file__DOT__reg_file__v0] 
            = __Vdlyvval__top__DOT__register_file__DOT__reg_file__v0;
    }
    vlSelf->top__DOT__instr = vlSelf->top__DOT__instr_mem__DOT__rom_array
        [(0xffU & vlSelf->top__DOT__PC)];
    vlSelf->top__DOT__ImmOp = ((0x10U & vlSelf->top__DOT__instr)
                                ? VL_EXTENDS_II(32,12, 
                                                (vlSelf->top__DOT__instr 
                                                 >> 0x14U))
                                : VL_EXTENDS_II(32,12, 
                                                ((0x800U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 0x14U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT__instr 
                                                        << 3U)) 
                                                    | ((0x3f0U 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 0x15U)) 
                                                       | (0xfU 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 8U)))))));
    vlSelf->top__DOT__ALU__DOT__ALUop2 = ((0x20U & vlSelf->top__DOT__instr)
                                           ? vlSelf->top__DOT__RD2
                                           : vlSelf->top__DOT__ImmOp);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
