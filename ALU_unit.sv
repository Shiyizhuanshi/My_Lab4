module ALU_unit #(
    parameter WIDTH = 32
)(
    input   logic [WIDTH-1:0] ALUop1,
    input   logic [WIDTH-1:0] RegOp2,
    input   logic [WIDTH-1:0] ImmOp,
    output  logic [WIDTH-1:0] ALUout,
    input   logic [2:0]       ALUctrl,
    input   logic [2:0]       ALUsrc,
    output  logic             EQ
);

logic [WIDTH-1:0] ALUop2;

assign ALUop2 = ALUsrc ? ImmOp : RegOp2;

always_comb begin
    ALUout = ALUctrl[0] ? ALUop1 + ALUop2 : ALUop1 - ALUop2;
    EQ = (ALUop1 == ALUop2);
end

endmodule
