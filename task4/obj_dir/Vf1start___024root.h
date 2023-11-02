// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1start.h for the primary calling header

#ifndef VERILATED_VF1START___024ROOT_H_
#define VERILATED_VF1START___024ROOT_H_  // guard

#include "verilated.h"

class Vf1start__Syms;

class Vf1start___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ f1start__DOT__cmd_seq;
    CData/*0:0*/ f1start__DOT__cmd_delay;
    CData/*0:0*/ f1start__DOT__d1;
    CData/*0:0*/ f1start__DOT__en;
    CData/*7:0*/ f1start__DOT____Vcellout__f1_fsm__data_out;
    CData/*6:0*/ f1start__DOT__lfsr__DOT__sreg;
    CData/*6:0*/ f1start__DOT__delay__DOT__count;
    CData/*6:0*/ __Vdly__f1start__DOT__lfsr__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN16(N,15,0);
    SData/*15:0*/ f1start__DOT__clktick__DOT__count;
    IData/*31:0*/ f1start__DOT__delay__DOT__current_state;
    IData/*31:0*/ f1start__DOT__delay__DOT__next_state;
    IData/*31:0*/ f1start__DOT__f1_fsm__DOT__current_state;
    IData/*31:0*/ f1start__DOT__f1_fsm__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1start__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1start___024root(Vf1start__Syms* symsp, const char* name);
    ~Vf1start___024root();
    VL_UNCOPYABLE(Vf1start___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
