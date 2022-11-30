module data_ram #(
    parameter WIDTH = 32
)(
    input logic                clk,
    input logic                Data_WE,
    input logic  [WIDTH -1:0]  Data_addr,
    input logic [WIDTH -1:0]   Data_WD,
    output logic  [WIDTH -1:0] Data_RD
);


logic [7:0] data_mem [32'hBFC00FFF:32'hBFC00000];

initial begin
        $display("Loading Data_mem.");
        $readmemh("data.mem", data_mem);
end;

always_comb begin
    Data_RD = {data_mem[Data_addr+3], data_mem[Data_addr+2], data_mem[Data_addr+1], data_mem[Data_addr]};
end

always_ff @(posedge clk)
    if (Data_WE) begin
    data_mem[Data_addr+3] = Data_WD[31:24];
    data_mem[Data_addr+2] = Data_WD[23:16];
    data_mem[Data_addr+1] = Data_WD[15:8];
    data_mem[Data_addr] = Data_WD[7:0];
    end

endmodule
