module signextend #(
    parameter Width = 32
)(
    input  logic [Width-1:0] instr,
    input  logic             ImmSrc,  //should be instr[4]
    output logic [Width-1:0] ImmOp
);

assign ImmOp = ImmSrc ? 32'(signed'({instr[31:20]})) : 32'(signed'({instr[31], instr[7], instr[30:25], instr[11:8]})); //{instr[31], instr[7], instr[30:25], instr[11:8]};     

    // assign a = {20'hFFFFF, instr}
    // assign b = {20'h0, instr}  
   

    // assign ImmOp = ImmSrc ? a : b;
endmodule
