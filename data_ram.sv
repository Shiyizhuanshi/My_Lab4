module data_ram #(
    parameter WIDTH = 32,
              wanted_width = 10
)(
    input logic                clk,
    input logic                Data_WE,
    input logic  [WIDTH -1:0]  Data_addr,
    input logic [WIDTH -1:0]   Data_WD,
    output logic  [WIDTH -1:0] Data_RD

);


logic [wanted_width-1:0] data_mem [2**10-1:0];
logic [wanted_width-1:0] short_addr;

initial begin
        $display("Loading Data_mem.");
        $readmemh("data.mem", data_mem);
end;

always_comb begin
    short_addr = Data_addr[wanted_width-1:0];
    Data_RD = {data_mem[short_addr], data_mem[short_addr+1], data_mem[short_addr+2], data_mem[short_addr+3]};
end

always_ff @(posedge clk)
    if (Data_WE) begin
    data_mem[short_addr] = Data_WD[31:24];
    data_mem[short_addr+1] = Data_WD[23:16];
    data_mem[short_addr+2] = Data_WD[15:8];
    data_mem[short_addr+3] = Data_WD[7:0];
    end

endmodule
