// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCcounter.h for the primary calling header

#include "verilated.h"

#include "VPCcounter__Syms.h"
#include "VPCcounter___024root.h"

void VPCcounter___024root___ctor_var_reset(VPCcounter___024root* vlSelf);

VPCcounter___024root::VPCcounter___024root(VPCcounter__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPCcounter___024root___ctor_var_reset(this);
}

void VPCcounter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPCcounter___024root::~VPCcounter___024root() {
}
