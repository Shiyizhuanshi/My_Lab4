#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcounter_unit.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vcounter_unit * top = new Vcounter_unit;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("counter_unit.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L4:counter_unit");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->ImmOp = 0;
  top->PCsrc = 0;

  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {

    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }


    vbdHex(4, (int(top->PC) >> 16) & 0xF);
    vbdHex(3, (int(top->PC) >> 8) & 0xF);
    vbdHex(2, (int(top->PC) >> 4) & 0xF);
    vbdHex(1, int(top->PC) & 0xF);
    // vbdPlot(int(top->PC), 0, 255);

    // vbdHex(4, (int(top->SUM) >> 4) & 0xF);
    // vbdHex(3, int(top->SUM) & 0xF);  
    // //vbdHex(2, (int(top->SUM) >> 0) & 0xF);
    // vbdHex(1, int(top->EQ) & 0xF);
    // //top->PC = top->out_PC;


    // set up input signals of testbench
    if (top->PC >= 64) {
      top->ImmOp = 64;
      top->PCsrc = 1;
    }
    else {
      top->PCsrc = 0;
      top->ImmOp = 64;
    }
    top->rst = (simcyc < 2) || (top->PC>= 255);    // assert reset for 1st cycle
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
