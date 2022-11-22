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

    case(instr[6:0])

    7'b0010011:begin //addi
    ALUctrl = instr[14:12];
    RegWrite = 1;
    ImmSrc = 1;
    ALUsrc = 1;
    PCsrc = 0;
    end

    7'b1100011:begin //bne
    ALUctrl = instr[14:12];
    RegWrite = 0;
    PCsrc = ~EQ;   
    ImmSrc = 0;
    ALUsrc = 0;
    end

    7'b0000011:begin //load
    ALUctrl = instr[14:12];
    RegWrite = 1;
    ImmSrc = 1;
    ALUsrc = 1;
    PCsrc = 0;
    end

    default:begin
    ALUctrl = instr[14:12];
    ImmSrc = 1;
    PCsrc = 0;
    RegWrite = 0;
    ALUsrc = 0;
    end

    endcase





    // begin                        // add      0110011
    // PCsrc = instr[6];            //addi      0010011
    // ALUsrc = ~instr[6];           //branch    1100011
    // ALUctrl = instr[14:12];      //          ||^ PCsrc
    // RegWrite = ~instr[6];        //          |^   not ALUsrc
    // ImmSrc = instr[6];          //          ^ not RegWrite 
    // end                          //          ALUctrl: funct3

endmodule





// 000 0011 load
// 001 0011 addi
// 110 0011 bne
// ^^ ~RegWrite
// ^^ PCsrc
// ^^ ~ALUsrc
// ^^ ~Immsrc