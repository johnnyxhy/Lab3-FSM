#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vdelay.h"
#include "Vclktick.h"
#include "Vf1_fsm.h"
#include "Vf1start.h"
#include "Vlfsr.h"
#include "Vmux2.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int started = 0;
  int reactiontime = 0;

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1start * top = new Vf1start;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("delay.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T4:F1Start");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->trigger = 0;
  top->N = 40;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    vbdBar(top->data_out);

    // set up input signals of testbench
    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    vbdCycle(simcyc);

    //Detecting when to start counting reaction time
    if(started < 3){
      top->trigger = vbdFlag();
      if(top->trigger == 1 && started == 0){
        started = 1;
      }
    }

    if(started == 1 && top->data_out > 0){
      started = 2;
      vbdHeader("Get Ready!");
    }

    if(started == 2 && top->data_out == 0){
      vbdInitWatch();
      vbdHeader("GO!!!");
      started = 3;
    }
    if(started == 3 && vbdFlag()){
      reactiontime = vbdElapsed();
      started = 0;
      vbdHeader("ReactTime(ms)");
      vbdHex(4, (reactiontime/1000)%10);
      vbdHex(3, (reactiontime/100)%10);
      vbdHex(2, (reactiontime/10)%10);
      vbdHex(1, reactiontime%10);
    }



    if (Verilated::gotFinish() || (vbdGetkey()=='q'))  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
