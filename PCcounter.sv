module PCcounter #(
    parameter WIDTH = 32 // the length of pc and imme
)(
    input  logic             clk,
    input  logic             rst,
    input  logic [WIDTH-1:0] ImmOp,
    input  logic             PCsrc,
    output logic [WIDTH-1:0] instr
);

logic [WIDTH-1:0] PC;
// logic [WIDTH-1:0] instr_full;

// assign instr = instr_full[15:0];

counter_unit pc_counter(
  .clk(clk),
  .rst(rst),
  .ImmOp(ImmOp),
  .PCsrc(PCsrc),
  .PC(PC)
);

instr_rom mem(
  .addr(PC),
  .dout(instr)
);

endmodule
