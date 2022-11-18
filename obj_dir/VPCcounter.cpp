// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPCcounter.h"
#include "VPCcounter__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPCcounter::VPCcounter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPCcounter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , instr{vlSymsp->TOP.instr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPCcounter::VPCcounter(const char* _vcname__)
    : VPCcounter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPCcounter::~VPCcounter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPCcounter___024root___eval_initial(VPCcounter___024root* vlSelf);
void VPCcounter___024root___eval_settle(VPCcounter___024root* vlSelf);
void VPCcounter___024root___eval(VPCcounter___024root* vlSelf);
#ifdef VL_DEBUG
void VPCcounter___024root___eval_debug_assertions(VPCcounter___024root* vlSelf);
#endif  // VL_DEBUG
void VPCcounter___024root___final(VPCcounter___024root* vlSelf);

static void _eval_initial_loop(VPCcounter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPCcounter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPCcounter___024root___eval_settle(&(vlSymsp->TOP));
        VPCcounter___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPCcounter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPCcounter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPCcounter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPCcounter___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VPCcounter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPCcounter::final() {
    VPCcounter___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPCcounter::hierName() const { return vlSymsp->name(); }
const char* VPCcounter::modelName() const { return "VPCcounter"; }
unsigned VPCcounter::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPCcounter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPCcounter___024root__trace_init_top(VPCcounter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPCcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCcounter___024root*>(voidSelf);
    VPCcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPCcounter___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPCcounter___024root__trace_register(VPCcounter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPCcounter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPCcounter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPCcounter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
