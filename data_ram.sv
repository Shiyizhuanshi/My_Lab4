module data_ram #(
    parameter WIDTH = 32
)(
    input logic                clk,
    input logic                Data_WE,
    input logic   [WIDTH -1:0] Data_addr,
    input logic   [WIDTH -1:0] Data_WD,
    output logic  [WIDTH -1:0] Data_RD
);


logic [7:0] data_mem [32'h00001FFF:32'h00001000];
logic [WIDTH -1:0] new_addr;

initial begin
        $display("Loading Data_mem.");
        $readmemh("data.mem", data_mem);
end;

assign new_addr = Data_addr + 32'h00001000;

always_comb begin
    Data_RD = {data_mem[new_addr+3], data_mem[new_addr+2], data_mem[new_addr+1], data_mem[new_addr]};
end



always_ff @(posedge clk)
    if (Data_WE) begin
    data_mem[new_addr+3] = Data_WD[31:24];
    data_mem[new_addr+2] = Data_WD[23:16];
    data_mem[new_addr+1] = Data_WD[15:8];
    data_mem[new_addr] = Data_WD[7:0];
    end

endmodule
