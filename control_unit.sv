module control_unit #(
    parameter Wid = 32
)(
    input  logic           EQ,
    input  logic [Wid-1:0] instr,
    output logic           RegWrite,
    output logic           ALUsrc,
    output logic           PCsrc,
    output logic [2:0]     ALUctrl,
    output logic           ImmSrc
);

always_comb
    begin                        // add      0110011
    PCsrc = instr[6];            //addi      0010011
    ALUsrc = ~instr[6];           //branch    1100011
    ALUctrl = instr[14:12];      //          ||^ PCsrc
    RegWrite = ~instr[6];        //          |^   not ALUsrc
    ImmSrc = instr[6];          //          ^ not RegWrite 
    end                          //          ALUctrl: funct3

endmodule





// 000 0001 load
// 001 0011 addi
// 110 0011 bne
// ^^ ~RegWrite
// ^^ PCsrc
// ^^ ~ALUsrc
// ^^ ~Immsrc