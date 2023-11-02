#include "Vlfsr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vlfsr* top = new Vlfsr;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("lfsr.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Lab3T1:LFSR");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run simulation for many clock cycles
    for(i=0; i<1000; i++){
        //dump variables into VCD file and toggle clock
        for(clk = 0; clk<2; clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval (); 
        }

    top->rst = 0;
   
   // For Plotting
    vbdHex(2, (top->data_out >> 4) &  0xF);
    vbdHex(1, top->data_out &  0xF);
    vbdBar(top->data_out);

    //set one-shot mode
    vbdSetMode(1);

    top->en = vbdFlag();

    if(Verilated::gotFinish() || (vbdGetkey()=='q'))
         exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}