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
    2'b10:     ImmOp = { {20{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };
    default:ImmOp = { {20{instr[31]}}, instr[31:20] };
    endcase

    // Immsrc 00 for lw and addi, 01 for sw, 10 for bne 


endmodule
