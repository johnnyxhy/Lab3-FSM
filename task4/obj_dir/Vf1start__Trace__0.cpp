// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1start__Syms.h"


void Vf1start___024root__trace_chg_sub_0(Vf1start___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1start___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_chg_top_0\n"); );
    // Init
    Vf1start___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1start___024root*>(voidSelf);
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1start___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1start___024root__trace_chg_sub_0(Vf1start___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((0U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                              & ((1U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                                 & (2U == vlSelf->f1start__DOT__delay__DOT__current_state)))));
        bufp->chgBit(oldp+1,(vlSelf->f1start__DOT__d1));
        bufp->chgSData(oldp+2,(vlSelf->f1start__DOT__clktick__DOT__count),16);
        bufp->chgCData(oldp+3,(vlSelf->f1start__DOT__delay__DOT__count),7);
        bufp->chgIData(oldp+4,(vlSelf->f1start__DOT__delay__DOT__current_state),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+5,(vlSelf->f1start__DOT__cmd_seq));
        bufp->chgBit(oldp+6,(vlSelf->f1start__DOT__cmd_delay));
        bufp->chgBit(oldp+7,(vlSelf->f1start__DOT__en));
        bufp->chgCData(oldp+8,(vlSelf->f1start__DOT__lfsr__DOT__sreg),7);
    }
    bufp->chgBit(oldp+9,(vlSelf->clk));
    bufp->chgBit(oldp+10,(vlSelf->rst));
    bufp->chgBit(oldp+11,(vlSelf->trigger));
    bufp->chgSData(oldp+12,(vlSelf->N),16);
    bufp->chgCData(oldp+13,(vlSelf->data_out),8);
    bufp->chgIData(oldp+14,(((0U == vlSelf->f1start__DOT__delay__DOT__current_state)
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
    bufp->chgCData(oldp+15,(vlSelf->f1start__DOT____Vcellout__f1_fsm__data_out),8);
    bufp->chgIData(oldp+16,(vlSelf->f1start__DOT__f1_fsm__DOT__current_state),32);
    bufp->chgIData(oldp+17,(vlSelf->f1start__DOT__f1_fsm__DOT__next_state),32);
}

void Vf1start___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root__trace_cleanup\n"); );
    // Init
    Vf1start___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1start___024root*>(voidSelf);
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
