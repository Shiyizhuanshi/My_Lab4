module top #(
    parameter D_WIDTH = 32,
              A_WIDTH = 5
)(
    input  logic        clk,
    input  logic        rst,
    output logic [16:0] a0,
    output logic [15:0] testPC
);

logic [D_WIDTH-1:0] PC;
logic [D_WIDTH-1:0] ImmOp;
logic PCsrc;
logic EQ;
logic RegWrite;
logic ALUctrl;
logic ALUsrc;
logic ImmSrc;
logic [A_WIDTH-1:0] AD1;
logic [A_WIDTH-1:0] AD2;
logic [A_WIDTH-1:0] AD3;
logic [A_WIDTH-1:0] WD3;
logic [D_WIDTH-1:0] RD1;
logic [D_WIDTH-1:0] RD2;
logic [D_WIDTH-1:0] ALUout;
logic [D_WIDTH-1:0] instr;
logic [D_WIDTH-1:0] out;

assign testPC = PC[15:0];
assign a0 = instr[15:0];

counter_unit pc_counter(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .ImmOp(ImmOp),
    .PC(PC)
);

instr_rom instr_mem(
    .addr(PC),
    .dout(instr)
);

control_unit encoder(
    .EQ(EQ),
    .instr(instr),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .PCsrc(PCsrc),
    .ALUctrl(ALUctrl),
    .ImmSrc(ImmSrc)
);

RegFile register_file(
    .clk(clk),
    .WE3(RegWrite),
    .AD1(instr[19:15]),
    .AD2(instr[24:20]),
    .AD3(instr[11:7]),
    .RD1(RD1),
    .RD2(RD2),
    .WD3(ALUout),
    .a0(out)
);

signextend extend(
    .instr(instr),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

ALU_unit ALU(
    .ALUop1(RD1),
    .RegOp2(RD2),
    .ImmOp(ImmOp),
    .ALUctrl(ALUctrl),
    .ALUout(ALUout),
    .ALUsrc(ALUsrc),
    .EQ(EQ)
);



endmodule
