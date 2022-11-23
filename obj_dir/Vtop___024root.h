// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__PCsrc;
    CData/*0:0*/ top__DOT__EQ;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*0:0*/ top__DOT__ALUsrc;
    CData/*0:0*/ top__DOT__ResultSrc;
    CData/*1:0*/ top__DOT__ImmSrc;
    CData/*4:0*/ top__DOT__AD1;
    CData/*4:0*/ top__DOT__AD2;
    CData/*4:0*/ top__DOT__AD3;
    CData/*0:0*/ top__DOT__Data_WE;
    CData/*2:0*/ top__DOT____Vcellout__encoder__ALUctrl;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*9:0*/ top__DOT__data_mem__DOT__short_addr;
    VL_OUT(a0,16,0);
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__RD1;
    IData/*31:0*/ top__DOT__RD2;
    IData/*31:0*/ top__DOT__ALUout;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__out;
    IData/*31:0*/ top__DOT__Data_addr;
    IData/*31:0*/ top__DOT__Data_RD;
    IData/*31:0*/ top__DOT__ALU__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 256> top__DOT__instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__register_file__DOT__reg_file;
    VlUnpacked<SData/*9:0*/, 1024> top__DOT__data_mem__DOT__data_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
