#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f PCcounter.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc  --trace PCcounter.sv   --exe PCcounter_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f VPCcounter.mk VPCcounter

# run executable simulation file
obj_dir/VPCcounter

#    ls /dev/tty.u*
#    /dev/tty.usbserial-110
#    /dev/ttyS3
#    chmod +x ./doit.sh