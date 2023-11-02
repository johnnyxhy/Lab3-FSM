// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1start__Syms.h"


VL_ATTR_COLD void Vf1start___024root__trace_init_sub__TOP__0(Vf1start___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+12,"trigger", false,-1);
    tracep->declBus(c+13,"N", false,-1, 15,0);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1start ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+12,"trigger", false,-1);
    tracep->declBus(c+13,"N", false,-1, 15,0);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->declBit(c+6,"cmd_seq", false,-1);
    tracep->declBit(c+7,"cmd_delay", false,-1);
    tracep->declBit(c+1,"d0", false,-1);
    tracep->declBit(c+2,"d1", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"K", false,-1, 6,0);
    tracep->pushNamePrefix("clktick ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+13,"N", false,-1, 15,0);
    tracep->declBit(c+2,"tick", false,-1);
    tracep->declBus(c+3,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+7,"trigger", false,-1);
    tracep->declBus(c+9,"n", false,-1, 6,0);
    tracep->declBit(c+1,"time_out", false,-1);
    tracep->declBus(c+4,"count", false,-1, 6,0);
    tracep->declBus(c+5,"current_state", false,-1, 31,0);
    tracep->declBus(c+15,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBit(c+12,"trigger", false,-1);
    tracep->declBus(c+16,"data_out", false,-1, 8,1);
    tracep->declBit(c+6,"cmd_seq", false,-1);
    tracep->declBit(c+7,"cmd_delay", false,-1);
    tracep->declBus(c+17,"current_state", false,-1, 31,0);
    tracep->declBus(c+18,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfsr ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 7,1);
    tracep->declBus(c+9,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+1,"d0", false,-1);
    tracep->declBit(c+2,"d1", false,-1);
    tracep->declBit(c+6,"s", false,-1);
    tracep->declBit(c+8,"y", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1start___024root__trace_init_top(Vf1start___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_init_top\n"); );
    // Body
    Vf1start___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1start___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1start___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1start___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1start___024root__trace_register(Vf1start___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1start___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1start___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1start___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1start___024root__trace_full_sub_0(Vf1start___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1start___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_full_top_0\n"); );
    // Init
    Vf1start___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1start___024root*>(voidSelf);
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1start___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1start___024root__trace_full_sub_0(Vf1start___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((0U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                           & ((1U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                              & (2U == vlSelf->f1start__DOT__delay__DOT__current_state)))));
    bufp->fullBit(oldp+2,(vlSelf->f1start__DOT__d1));
    bufp->fullSData(oldp+3,(vlSelf->f1start__DOT__clktick__DOT__count),16);
    bufp->fullCData(oldp+4,(vlSelf->f1start__DOT__delay__DOT__count),7);
    bufp->fullIData(oldp+5,(vlSelf->f1start__DOT__delay__DOT__current_state),32);
    bufp->fullBit(oldp+6,(vlSelf->f1start__DOT__cmd_seq));
    bufp->fullBit(oldp+7,(vlSelf->f1start__DOT__cmd_delay));
    bufp->fullBit(oldp+8,(vlSelf->f1start__DOT__en));
    bufp->fullCData(oldp+9,(vlSelf->f1start__DOT__lfsr__DOT__sreg),7);
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullBit(oldp+11,(vlSelf->rst));
    bufp->fullBit(oldp+12,(vlSelf->trigger));
    bufp->fullSData(oldp+13,(vlSelf->N),16);
    bufp->fullCData(oldp+14,(vlSelf->data_out),8);
    bufp->fullIData(oldp+15,(((0U == vlSelf->f1start__DOT__delay__DOT__current_state)
                               ? ((IData)(vlSelf->f1start__DOT__cmd_delay)
                                   ? 1U : vlSelf->f1start__DOT__delay__DOT__current_state)
                               : ((1U == vlSelf->f1start__DOT__delay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->f1start__DOT__delay__DOT__count))
                                       ? 2U : vlSelf->f1start__DOT__delay__DOT__current_state)
                                   : ((2U == vlSelf->f1start__DOT__delay__DOT__current_state)
                                       ? ((IData)(vlSelf->f1start__DOT__cmd_delay)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->f1start__DOT__delay__DOT__current_state)
                                           ? ((IData)(vlSelf->f1start__DOT__cmd_delay)
                                               ? vlSelf->f1start__DOT__delay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullCData(oldp+16,(vlSelf->f1start__DOT____Vcellout__f1_fsm__data_out),8);
    bufp->fullIData(oldp+17,(vlSelf->f1start__DOT__f1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+18,(vlSelf->f1start__DOT__f1_fsm__DOT__next_state),32);
    bufp->fullIData(oldp+19,(0x10U),32);
    bufp->fullIData(oldp+20,(7U),32);
}
