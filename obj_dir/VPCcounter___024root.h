// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPCcounter.h for the primary calling header

#ifndef VERILATED_VPCCOUNTER___024ROOT_H_
#define VERILATED_VPCCOUNTER___024ROOT_H_  // guard

#include "verilated.h"

class VPCcounter__Syms;

class VPCcounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(PCsrc,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    VL_OUT(instr,31,0);
    IData/*31:0*/ PCcounter__DOT__next_PC;
    VlUnpacked<IData/*31:0*/, 256> PCcounter__DOT__instr_mem__DOT__rom_array;

    // INTERNAL VARIABLES
    VPCcounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPCcounter___024root(VPCcounter__Syms* symsp, const char* name);
    ~VPCcounter___024root();
    VL_UNCOPYABLE(VPCcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
