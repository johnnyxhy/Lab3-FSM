#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;
    int simcyc = 1;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vf1_fsm* top = new Vf1_fsm;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("f1_fsm.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Lab3T2:F1_FSM");

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
    
    if(top->data_out == 0 && top->en == 1){
        simcyc += 1;
    }

    if(simcyc<2){
        top->rst = 0;
    } else {
        top->rst = 1;
    }

   
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