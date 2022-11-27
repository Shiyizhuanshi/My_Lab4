module instr_rom 
// #(
//     parameter ADDRESS_WIDTH = 32, //should be in the same length as PC
//               DATA_WIDTH    = 8)
(
    input logic  [31:0]     addr,
    output logic [31:0]     dout

);

logic [7:0] rom_array [2**8-1:0]; //Theoretically, there should be 2^32 in memmory   
logic [7:0] short_addr;                 // but we do not need that many space, so I made to 
                                            // have only 256 memory spaces
//date width should be 8bit because it is a byte addressable memory
//so each instruction consist of four 8-bit byte

initial begin
        $display("Loading Instr_mem.");
        $readmemh("instruction.mem", rom_array);  //read instruction into rom
        // $display(rom_array [0], rom_array [1], rom_array [2],rom_array [3]);
end;

assign short_addr = addr[7:0];

always_comb
    dout <= {rom_array [short_addr[7:0]], rom_array [short_addr[7:0]+1], rom_array [short_addr[7:0]+2],rom_array [short_addr[7:0]+3]};
    // dout <= 8'h11;

endmodule
