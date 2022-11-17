#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VPCcounter.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VPCcounter * top = new VPCcounter;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("PCcounter.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L4:PCcounter");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->PC = 0;
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


    vbdHex(4, (int(top->instr) >> 16) & 0xF);
    vbdHex(3, (int(top->instr) >> 8) & 0xF);
    vbdHex(2, (int(top->instr) >> 4) & 0xF);
    vbdHex(1, int(top->instr) & 0xF);
    // vbdPlot(int(top->next_PC), 0, 255);

    // vbdHex(4, (int(top->SUM) >> 4) & 0xF);
    // vbdHex(3, int(top->SUM) & 0xF);  
    // //vbdHex(2, (int(top->SUM) >> 0) & 0xF);
    // vbdHex(1, int(top->EQ) & 0xF);
    // //top->PC = top->out_PC;


    // set up input signals of testbench
    // top->PC = top->next_PC;
    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
