// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    if ((1U & (~ (vlSelf->top__DOT__instr >> 6U)))) {
        vlSelf->top__DOT__register_file__DOT__reg_file[(0x1fU 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 7U))] 
            = vlSelf->top__DOT__ALUout;
    }
    vlSelf->top__DOT__out = vlSelf->top__DOT__register_file__DOT__reg_file
        [0U];
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : ((0x40U & vlSelf->top__DOT__instr)
                                 ? (vlSelf->top__DOT__PC 
                                    + vlSelf->top__DOT__ImmOp)
                                 : ((IData)(4U) + vlSelf->top__DOT__PC)));
    vlSelf->testPC = (0xffffU & vlSelf->top__DOT__PC);
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__instr_mem__DOT__rom_array
                                [(0xffU & vlSelf->top__DOT__PC)] 
                                << 0x18U) | ((vlSelf->top__DOT__instr_mem__DOT__rom_array
                                              [(0xffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->top__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__instr_mem__DOT__rom_array
                                                 [(0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__instr_mem__DOT__rom_array
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->top__DOT__PC))])));
    vlSelf->a0 = (0xffffU & vlSelf->top__DOT__instr);
    if ((0x40U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__ImmOp = VL_EXTENDS_II(32,12, 
                                                (vlSelf->top__DOT__instr 
                                                 >> 0x14U));
        vlSelf->top__DOT__ALU__DOT__ALUop2 = vlSelf->top__DOT__RD2;
    } else {
        vlSelf->top__DOT__ImmOp = VL_EXTENDS_II(32,12, 
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
                                                             >> 8U))))));
        vlSelf->top__DOT__ALU__DOT__ALUop2 = vlSelf->top__DOT__ImmOp;
    }
    vlSelf->top__DOT__ALUout = ((0x1000U & vlSelf->top__DOT__instr)
                                 ? (vlSelf->top__DOT__RD1 
                                    + vlSelf->top__DOT__ALU__DOT__ALUop2)
                                 : (vlSelf->top__DOT__RD1 
                                    - vlSelf->top__DOT__ALU__DOT__ALUop2));
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
