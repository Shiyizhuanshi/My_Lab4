module RegFile #(
    parameter D_WIDTH = 32,
              A_WIDTH = 5
)(
    input logic                clk,
    input logic                WE3,
    input logic                ResultSrc,
    input logic [A_WIDTH-1:0]  AD1,
    input logic [A_WIDTH-1:0]  AD2,
    input logic [A_WIDTH-1:0]  AD3,
    input logic [D_WIDTH-1:0]  ALUout,
    input logic [D_WIDTH-1:0]  Data_RD,
    output logic [D_WIDTH-1:0] RD1,
    output logic [D_WIDTH-1:0] RD2,
    output logic [D_WIDTH-1:0] a0
);

reg [D_WIDTH-1:0] reg_file [31:0];

logic [D_WIDTH-1:0] WD3;

assign WD3 = ResultSrc ? Data_RD : ALUout;

// initial begin
//     // for (i = 0; i < 2**A_WIDTH -1; i++){
//     //     reg_file[i] <= 32'b0
//     // }
//     $display("Loading RegFile.");
//     $readmemh("RegFile.mem", reg_file);
// end;
assign reg_file[0] = 32'b0;

always_ff @( posedge clk ) begin 

    if (WE3) reg_file[AD3] = WD3;
    
end

always_comb begin
    RD1 = reg_file[AD1];
    RD2 = reg_file[AD2];
    a0 <= reg_file[10];
end

endmodule
