module PCcounter #(
    parameter WIDTH = 32 // the length of pc and imme
)(
    input logic clk,
    input logic rst,
    input logic [WIDTH-1:0] ImmOp,
    input logic PCsrc,
    output logic [31:0] instr
);

logic [WIDTH-1:0] next_PC;

counter_unit pc_counter(
  .clk(clk),
  .rst(rst),
  .ImmOp(ImmOp),
  .PCsrc(PCsrc),
  .PC(next_PC)
);

rom instr_mem(
  .addr(next_PC),
  .dout(instr)
);

endmodule
