module control_unit #(
    parameter Wid = 32
)(
    input  logic           EQ,
    input  logic [Wid-1:0] instr,
    output logic           RegWrite,
    output logic           ResultSrc,
    output logic           ALUsrc,
    output logic           PCsrc,
    output logic [2:0]     ALUctrl,
    output logic [1:0]     ImmSrc,
    output logic           Data_WE
);

always_comb

    case(instr[6:0])

    7'b0010011:begin //addi
    ALUctrl = instr[14:12];
    RegWrite = 1;
    ImmSrc = 00;
    ALUsrc = 1;
    PCsrc = 0;
    ResultSrc = 0;
    end

    7'b0000011:begin //lw
    ALUctrl = instr[14:12];
    RegWrite = 1;
    ImmSrc = 00;
    ALUsrc = 1;
    PCsrc = 0;
    ResultSrc = 1;
    end

    7'b1100011:begin //bne
    ALUctrl = instr[14:12];
    RegWrite = 0;
    PCsrc = ~EQ;   
    ImmSrc = 10;
    ALUsrc = 0;
    end

    7'b0100011:begin //sw
    ALUctrl = instr[14:12];
    RegWrite = 0;
    ImmSrc = 01;
    ALUsrc = 1;
    PCsrc = 0;
    Data_WE = 1;
    end



    default:begin
    ALUctrl = instr[14:12];
    ImmSrc = 00;
    PCsrc = 0;
    RegWrite = 0;
    ALUsrc = 0;
    ResultSrc = 0;
    Data_WE = 0;
    end

    endcase

    // Immsrc 00 for lw and addi, 01 for sw, 10 for bne 




    // begin                        // add      0110011
    // PCsrc = instr[6];            //addi      0010011
    // ALUsrc = ~instr[6];           //branch    1100011
    // ALUctrl = instr[14:12];      //          ||^ PCsrc
    // RegWrite = ~instr[6];        //          |^   not ALUsrc
    // ImmSrc = instr[6];          //          ^ not RegWrite 
    // end                          //          ALUctrl: funct3

endmodule


