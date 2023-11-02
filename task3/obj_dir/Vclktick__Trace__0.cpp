// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclktick__Syms.h"


void Vclktick___024root__trace_chg_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vclktick___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_chg_top_0\n"); );
    // Init
    Vclktick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclktick___024root*>(voidSelf);
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vclktick___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vclktick___024root__trace_chg_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((((((((((0U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state) 
                                       | (1U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                      | (2U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                     | (3U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                    | (4U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                   | (5U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                  | (6U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                 | (7U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state))
                                 ? ((0U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                     ? 0U : ((1U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                              ? 1U : 
                                             ((2U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                                 : ((8U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                     ? 0xffU : 0U))),8);
        bufp->chgIData(oldp+1,(vlSelf->clktick__DOT__f1_fsm__DOT__current_state),32);
        bufp->chgIData(oldp+2,(vlSelf->clktick__DOT__f1_fsm__DOT__next_state),32);
    }
    bufp->chgBit(oldp+3,(vlSelf->clk));
    bufp->chgBit(oldp+4,(vlSelf->rst));
    bufp->chgBit(oldp+5,(vlSelf->en));
    bufp->chgSData(oldp+6,(vlSelf->N),16);
    bufp->chgBit(oldp+7,(vlSelf->tick));
    bufp->chgCData(oldp+8,(vlSelf->data_out),8);
    bufp->chgSData(oldp+9,(vlSelf->clktick__DOT__count),16);
}

void Vclktick___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_cleanup\n"); );
    // Init
    Vclktick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclktick___024root*>(voidSelf);
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
