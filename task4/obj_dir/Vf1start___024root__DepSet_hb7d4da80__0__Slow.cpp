// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1start.h for the primary calling header

#include "verilated.h"

#include "Vf1start___024root.h"

VL_ATTR_COLD void Vf1start___024root___initial__TOP__0(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->f1start__DOT__delay__DOT__count = 0U;
}

VL_ATTR_COLD void Vf1start___024root___settle__TOP__0(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->f1start__DOT__cmd_delay = ((~ ((((((((0U 
                                                  == vlSelf->f1start__DOT__f1_fsm__DOT__current_state) 
                                                 | (1U 
                                                    == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                                | (2U 
                                                   == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                               | (3U 
                                                  == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                              | (4U 
                                                 == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                             | (5U 
                                                == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                            | (6U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                           | (7U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state))) 
                                       & ((8U != vlSelf->f1start__DOT__f1_fsm__DOT__current_state) 
                                          & (9U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)));
    vlSelf->f1start__DOT____Vcellout__f1_fsm__data_out 
        = (((((((((0U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state) 
                  | (1U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                 | (2U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                | (3U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
               | (4U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
              | (5U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
             | (6U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
            | (7U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state))
            ? ((0U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                ? 0U : ((1U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                         ? 0U : ((2U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                  ? 1U : ((3U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                           ? 3U : (
                                                   (4U 
                                                    == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                                    ? 7U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                                     ? 0xfU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                                      ? 0x1fU
                                                      : 0x3fU)))))))
            : ((8U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                ? 0x7fU : ((9U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                            ? 0xffU : 0U)));
    vlSelf->data_out = vlSelf->f1start__DOT____Vcellout__f1_fsm__data_out;
    vlSelf->f1start__DOT__delay__DOT__next_state = 
        ((0U == vlSelf->f1start__DOT__delay__DOT__current_state)
          ? ((IData)(vlSelf->f1start__DOT__cmd_delay)
              ? 1U : vlSelf->f1start__DOT__delay__DOT__current_state)
          : ((1U == vlSelf->f1start__DOT__delay__DOT__current_state)
              ? ((0U == (IData)(vlSelf->f1start__DOT__delay__DOT__count))
                  ? 2U : vlSelf->f1start__DOT__delay__DOT__current_state)
              : ((2U == vlSelf->f1start__DOT__delay__DOT__current_state)
                  ? ((IData)(vlSelf->f1start__DOT__cmd_delay)
                      ? 3U : 0U) : ((3U == vlSelf->f1start__DOT__delay__DOT__current_state)
                                     ? ((IData)(vlSelf->f1start__DOT__cmd_delay)
                                         ? vlSelf->f1start__DOT__delay__DOT__current_state
                                         : 0U) : 0U))));
    vlSelf->f1start__DOT__cmd_seq = (((((((((0U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state) 
                                            | (1U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                           | (2U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                          | (3U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                         | (4U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                        | (5U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                       | (6U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
                                      | (7U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state))
                                      ? (0U != vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                      : (8U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state));
    vlSelf->f1start__DOT__en = ((IData)(vlSelf->f1start__DOT__cmd_seq)
                                 ? (IData)(vlSelf->f1start__DOT__d1)
                                 : ((0U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                                    & ((1U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                                       & (2U == vlSelf->f1start__DOT__delay__DOT__current_state))));
    vlSelf->f1start__DOT__f1_fsm__DOT__next_state = 
        (((((((((0U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state) 
                | (1U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
               | (2U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
              | (3U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
             | (4U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
            | (5U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
           | (6U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)) 
          | (7U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state))
          ? ((0U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
              ? ((IData)(vlSelf->trigger) ? 1U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
              : ((1U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                  ? ((IData)(vlSelf->f1start__DOT__en)
                      ? 2U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                  : ((2U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                      ? ((IData)(vlSelf->f1start__DOT__en)
                          ? 3U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                      : ((3U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                          ? ((IData)(vlSelf->f1start__DOT__en)
                              ? 4U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                          : ((4U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                              ? ((IData)(vlSelf->f1start__DOT__en)
                                  ? 5U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                              : ((5U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                  ? ((IData)(vlSelf->f1start__DOT__en)
                                      ? 6U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                  : ((6U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                      ? ((IData)(vlSelf->f1start__DOT__en)
                                          ? 7U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                                      : ((IData)(vlSelf->f1start__DOT__en)
                                          ? 8U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state))))))))
          : ((8U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
              ? ((IData)(vlSelf->f1start__DOT__en) ? 9U
                  : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
              : ((9U == vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                  ? ((IData)(vlSelf->f1start__DOT__en)
                      ? 0U : vlSelf->f1start__DOT__f1_fsm__DOT__current_state)
                  : 0U)));
}

VL_ATTR_COLD void Vf1start___024root___eval_initial(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vf1start___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1start___024root___eval_settle(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___eval_settle\n"); );
    // Body
    Vf1start___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1start___024root___final(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___final\n"); );
}

VL_ATTR_COLD void Vf1start___024root___ctor_var_reset(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1start__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->f1start__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->f1start__DOT__d1 = VL_RAND_RESET_I(1);
    vlSelf->f1start__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->f1start__DOT____Vcellout__f1_fsm__data_out = VL_RAND_RESET_I(8);
    vlSelf->f1start__DOT__clktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1start__DOT__lfsr__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->f1start__DOT__delay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->f1start__DOT__delay__DOT__current_state = 0;
    vlSelf->f1start__DOT__delay__DOT__next_state = 0;
    vlSelf->f1start__DOT__f1_fsm__DOT__current_state = 0;
    vlSelf->f1start__DOT__f1_fsm__DOT__next_state = 0;
    vlSelf->__Vdly__f1start__DOT__lfsr__DOT__sreg = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
