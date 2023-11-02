// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1start.h for the primary calling header

#include "verilated.h"

#include "Vf1start__Syms.h"
#include "Vf1start___024root.h"

void Vf1start___024root___ctor_var_reset(Vf1start___024root* vlSelf);

Vf1start___024root::Vf1start___024root(Vf1start__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1start___024root___ctor_var_reset(this);
}

void Vf1start___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1start___024root::~Vf1start___024root() {
}
