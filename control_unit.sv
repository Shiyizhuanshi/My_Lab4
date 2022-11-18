module control_unit #(
    parameter Wid = 32
)(
    input  logic           EQ,
    input  logic [Wid-1:0] instr,
    output logic           RgeWrite,
    output logic           ALUsrc,
    output logic           PCsrc,
    output logic [2:0]     ALUctrl,
    output logic [2:0]     ImmSrc
);

always_comb
    begin                        // add      0110011
    PCsrc = instr[4];            //addi      0010011
    ALUSrc = ~intr[5];           //branch    1100011
    ALUctrl = instr[14:12];      //          ||^ PCsrc
    RegWrite = ~instr[6];        //          |^   not ALUsrc
    ImmSrc = instr[4];          //          ^ not RegWrite 
    end                          //          ALUctrl: funct3

