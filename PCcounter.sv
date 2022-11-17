module PCcounter #(
    parameter WIDTH = 29 // the length of pc and imme
)(
    input logic clk,
    input logic rst,
    input logic [WIDTH-1:0] PC,
    input logic [WIDTH-1:0] ImmOp,
    input logic PCsrc,
    output logic [31:0] instr
);

logic [WIDTH-1:0] next_PC;

counter pc_counter(
  .clk(clk),
  .rst(rst),
  .PC(PC),
  .ImmOp(ImmOp),
  .PCsrc(PCsrc),
  .next_PC(next_PC)
);

rom instr_mem(
  .addr(next_PC),
  .dout(instr)
);

endmodule
