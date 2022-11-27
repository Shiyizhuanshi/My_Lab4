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

logic [2:0] funct3;
logic [6:0] funct7;
logic [6:0] opcode;
assign funct3 = instr[14:12];
assign opcode = instr[6:0];

always_comb

    case(opcode)

    // 7'b0110011:    //R-type
    //     case(funct3)
    //         3'b000:
    //         3'b001:
    //         3'b010:
    //         3'b011:
    //         3'b100:
    //         3'b101:
    //         3'b110:
    //         3'b111:
    //         default:



    7'b0010011:begin //addi
    ALUctrl = instr[14:12];
    RegWrite = 1;
    ImmSrc = 2'b00;
    ALUsrc = 1;
    PCsrc = 0;
    ResultSrc = 0;
    end

    7'b0000011:begin //lw
    ALUctrl = instr[14:12];
    RegWrite = 1;
    ImmSrc = 2'b00;
    ALUsrc = 1;
    PCsrc = 0;
    ResultSrc = 1;
    end

    7'b1100011:begin //bne
    ALUctrl = instr[14:12];
    RegWrite = 0;
    PCsrc = ~EQ;   
    ImmSrc = 2'b10;
    ALUsrc = 0;
    ResultSrc = 0;
    end

    7'b0100011:begin //sw
    ALUctrl = instr[14:12];
    RegWrite = 0;
    ImmSrc = 2'b01;
    ALUsrc = 1;
    PCsrc = 0;
    Data_WE = 1;
    ResultSrc = 1;
    end

    // 7'b1100011:             //branch
    //     case(funct3)
    //         3'b000:
    //         3'b001:
    //         3'b100:
    //         3'b101:
    //         3'b110:
    //         3'b111:

    //     endcase



    default:begin
    ALUctrl = instr[14:12];
    ImmSrc = 2'b00;
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


