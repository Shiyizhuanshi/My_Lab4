module counter_unit #(
    parameter PC_WIDTH = 32 // the length of pc and imme
)(
    input  logic clk,
    input  logic rst,
    input  logic PCsrc,
    // input  logic [PC_WIDTH-1:0] PC,
    input  logic [PC_WIDTH-1:0] ImmOp,
    output logic [PC_WIDTH-1:0] PC
);

// logic [PC_WIDTH-1:0] next_PC;
// logic [PC_WIDTH-1:0] branch_PC;

// assign branch_PC = PC + ImmOp;                                        //compute branch_pc
// assign next_PC = PCsrc ? branch_PC : PC + {{PC_WIDTH-1{1'b0}}, 1'b1};    //compute inc_PC

always_ff @ (posedge clk)begin
  if (rst)      PC <= {PC_WIDTH{1'b0}};
  else if (PCsrc)    PC <= PC + ImmOp;
  else          PC <= PC + 4;
end


endmodule
