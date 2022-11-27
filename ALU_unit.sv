module ALU_unit #(
    parameter WIDTH = 32
)(
    input   logic [WIDTH-1:0] ALUop1,
    input   logic [WIDTH-1:0] RegOp2,
    input   logic [WIDTH-1:0] ImmOp,
    output  logic [WIDTH-1:0] ALUout,
    input   logic [2:0]       ALUctrl,
    input   logic             ALUsrc,
    output  logic             EQ
);

logic [WIDTH-1:0] ALUop2;

always_comb begin
    ALUop2 = ALUsrc ? ImmOp : RegOp2;
    ALUout = ALUctrl[0] ? ALUop1 - ALUop2 : ALUop1 + ALUop2;               
    EQ = (ALUop1 == ALUop2);
end



// 000 add
// 001 sub
// 010 and
// 011 or
// 101 SLT


endmodule

