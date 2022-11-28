module signextend #(
    parameter Width = 32
)(
    input  logic [Width-1:0] instr,
    input  logic [1:0]       ImmSrc,
    output logic [Width-1:0] ImmOp
);


// assign ImmOp = ImmSrc ? { {20{instr[31]}}, instr[31:20] } : { {20{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };  

always_comb

    case(ImmSrc)
    2'b00:     ImmOp = { {20{instr[31]}}, instr[31:20] };
    2'b01:     ImmOp = { {20{instr[31]}}, instr[31:25], instr[11:7] };
    2'b10:     ImmOp = { {19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };
    default:ImmOp = { {20{instr[31]}}, instr[31:20] };
    endcase

    // 000 for I-Tpye
    // 001 for S-Tpye
    // 010 for B-Tpye
    // 011 for R-Tpye ImmOp = {32'b0};
    // 100 for U-Tpye ImmOp = { {12{instr[31]}}, instr[31:12] };
    // 101 for J-Tpye ImmOp = { {11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0 }


endmodule
