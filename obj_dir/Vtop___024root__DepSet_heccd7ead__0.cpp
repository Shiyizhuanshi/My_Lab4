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
    if (vlSelf->top__DOT__RegWrite) {
        vlSelf->top__DOT__register_file__DOT__reg_file[(0x1fU 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 7U))] 
            = vlSelf->top__DOT__ALUout;
    }
    vlSelf->top__DOT____Vcellout__register_file__a0 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0U];
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : ((IData)(vlSelf->top__DOT__PCsrc)
                                 ? (vlSelf->top__DOT__PC 
                                    + vlSelf->top__DOT__ImmOp)
                                 : ((IData)(4U) + vlSelf->top__DOT__PC)));
    vlSelf->a0 = (0x1ffffU & vlSelf->top__DOT____Vcellout__register_file__a0);
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
    if ((0x13U == (0x7fU & vlSelf->top__DOT__instr))) {
        vlSelf->top__DOT__RegWrite = 1U;
        vlSelf->top__DOT__ALUsrc = 1U;
    } else if ((0x63U == (0x7fU & vlSelf->top__DOT__instr))) {
        vlSelf->top__DOT__RegWrite = 0U;
        vlSelf->top__DOT__ALUsrc = 0U;
    } else if ((1U == (0x7fU & vlSelf->top__DOT__instr))) {
        vlSelf->top__DOT__RegWrite = 1U;
        vlSelf->top__DOT__ALUsrc = 1U;
    }
    vlSelf->top__DOT__ImmOp = ((IData)(vlSelf->top__DOT__ImmSrc)
                                ? (((- (IData)((vlSelf->top__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top__DOT__instr 
                                                >> 0x14U))
                                : (((- (IData)((vlSelf->top__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
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
    vlSelf->top__DOT__ALU__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                           ? vlSelf->top__DOT__ImmOp
                                           : vlSelf->top__DOT__RD2);
    if ((0x13U != (0x7fU & vlSelf->top__DOT__instr))) {
        if ((0x63U != (0x7fU & vlSelf->top__DOT__instr))) {
            if ((1U != (0x7fU & vlSelf->top__DOT__instr))) {
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
            }
        }
    }
    vlSelf->top__DOT__ALUout = ((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ALUctrl))
                                 ? (vlSelf->top__DOT__RD1 
                                    - vlSelf->top__DOT__ALU__DOT__ALUop2)
                                 : (vlSelf->top__DOT__RD1 
                                    + vlSelf->top__DOT__ALU__DOT__ALUop2));
    vlSelf->top__DOT__EQ = (vlSelf->top__DOT__RD1 == vlSelf->top__DOT__ALU__DOT__ALUop2);
    if ((0x13U != (0x7fU & vlSelf->top__DOT__instr))) {
        if ((0x63U == (0x7fU & vlSelf->top__DOT__instr))) {
            vlSelf->top__DOT__PCsrc = (1U & (~ (IData)(vlSelf->top__DOT__EQ)));
        } else if ((1U != (0x7fU & vlSelf->top__DOT__instr))) {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    }
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
