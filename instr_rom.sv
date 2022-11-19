module instr_rom #(
    parameter ADDRESS_WIDTH = 8, //should be in the same length as PC
              DATA_WIDTH    = 32
)(
    input logic  [ADDRESS_WIDTH-1:0]  addr,
    output logic [DATA_WIDTH-1:0]     dout

);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading Instr_mem.");
        $readmemh("instruction.mem", rom_array);  //read instruction into rom
end;

always_comb begin
    dout <= rom_array [addr[7:0]];    
    end
endmodule
