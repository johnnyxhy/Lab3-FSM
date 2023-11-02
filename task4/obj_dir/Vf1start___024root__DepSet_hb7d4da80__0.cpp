// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1start.h for the primary calling header

#include "verilated.h"

#include "Vf1start___024root.h"

VL_INLINE_OPT void Vf1start___024root___sequent__TOP__0(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__f1start__DOT__lfsr__DOT__sreg = vlSelf->f1start__DOT__lfsr__DOT__sreg;
    if (vlSelf->rst) {
        vlSelf->__Vdly__f1start__DOT__lfsr__DOT__sreg = 1U;
        vlSelf->f1start__DOT__f1_fsm__DOT__current_state = 0U;
    } else {
        vlSelf->__Vdly__f1start__DOT__lfsr__DOT__sreg 
            = ((0x7eU & ((IData)(vlSelf->f1start__DOT__lfsr__DOT__sreg) 
                         << 1U)) | (1U & VL_REDXOR_8(
                                                     (0x44U 
                                                      & (IData)(vlSelf->f1start__DOT__lfsr__DOT__sreg)))));
        vlSelf->f1start__DOT__f1_fsm__DOT__current_state 
            = vlSelf->f1start__DOT__f1_fsm__DOT__next_state;
    }
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
}

VL_INLINE_OPT void Vf1start___024root___sequent__TOP__1(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdly__f1start__DOT__clktick__DOT__count;
    // Body
    __Vdly__f1start__DOT__clktick__DOT__count = vlSelf->f1start__DOT__clktick__DOT__count;
    vlSelf->f1start__DOT__delay__DOT__count = (0x7fU 
                                               & ((((IData)(vlSelf->rst) 
                                                    | (IData)(vlSelf->f1start__DOT__cmd_delay)) 
                                                   | (0U 
                                                      == (IData)(vlSelf->f1start__DOT__delay__DOT__count)))
                                                   ? 
                                                  ((IData)(vlSelf->f1start__DOT__lfsr__DOT__sreg) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(vlSelf->f1start__DOT__delay__DOT__count) 
                                                   - (IData)(1U))));
    if (vlSelf->rst) {
        vlSelf->f1start__DOT__delay__DOT__current_state = 0U;
        vlSelf->f1start__DOT__d1 = 0U;
        __Vdly__f1start__DOT__clktick__DOT__count = vlSelf->N;
    } else {
        vlSelf->f1start__DOT__delay__DOT__current_state 
            = vlSelf->f1start__DOT__delay__DOT__next_state;
        if (vlSelf->f1start__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->f1start__DOT__clktick__DOT__count))) {
                vlSelf->f1start__DOT__d1 = 1U;
                __Vdly__f1start__DOT__clktick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1start__DOT__clktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1start__DOT__clktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->f1start__DOT__d1 = 0U;
            }
        }
    }
    vlSelf->f1start__DOT__clktick__DOT__count = __Vdly__f1start__DOT__clktick__DOT__count;
}

VL_INLINE_OPT void Vf1start___024root___sequent__TOP__2(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->f1start__DOT__lfsr__DOT__sreg = vlSelf->__Vdly__f1start__DOT__lfsr__DOT__sreg;
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
    vlSelf->f1start__DOT__en = ((IData)(vlSelf->f1start__DOT__cmd_seq)
                                 ? (IData)(vlSelf->f1start__DOT__d1)
                                 : ((0U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                                    & ((1U != vlSelf->f1start__DOT__delay__DOT__current_state) 
                                       & (2U == vlSelf->f1start__DOT__delay__DOT__current_state))));
}

VL_INLINE_OPT void Vf1start___024root___combo__TOP__0(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___combo__TOP__0\n"); );
    // Body
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

void Vf1start___024root___eval(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1start___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1start___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1start___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vf1start___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1start___024root___eval_debug_assertions(Vf1start___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1start__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1start___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
