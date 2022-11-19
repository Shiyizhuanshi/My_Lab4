module RegFile #(
    parameter D_WIDTH = 32,
              A_WIDTH = 5
)(
    input logic clk,
    input logic WE3,
    input logic [A_WIDTH-1:0] AD1,
    input logic [A_WIDTH-1:0] AD2,
    input logic [A_WIDTH-1:0] AD3,
    input logic [D_WIDTH-1:0] WD3,
    output logic [D_WIDTH-1:0] RD1,
    output logic [D_WIDTH-1:0] RD2,
    output logic [D_WIDTH-1:0] a0
);

reg [D_WIDTH-1:0] reg_file [2**A_WIDTH -1:0];

initial begin
    // for (i = 0; i < 2**A_WIDTH -1; i++){
    //     reg_file[i] <= 32'b0
    // }
    $display("Loading RegFile.");
    $readmemh("RegFile.mem", reg_file);
end;

always_ff @( posedge clk ) begin 
    RD1 <= reg_file[AD1];
    RD2 <= reg_file[AD2];
    if (WE3) reg_file[AD3] <= WD3;
    a0 <= reg_file[10];
end
endmodule
