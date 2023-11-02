// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclktick__Syms.h"


VL_ATTR_COLD void Vclktick___024root__trace_init_sub__TOP__0(Vclktick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("clktick ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->declBus(c+10,"count", false,-1, 15,0);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+1,"data_out", false,-1, 8,1);
    tracep->declBus(c+2,"current_state", false,-1, 31,0);
    tracep->declBus(c+3,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vclktick___024root__trace_init_top(Vclktick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_init_top\n"); );
    // Body
    Vclktick___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vclktick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclktick___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclktick___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vclktick___024root__trace_register(Vclktick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vclktick___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vclktick___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vclktick___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vclktick___024root__trace_full_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vclktick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_full_top_0\n"); );
    // Init
    Vclktick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclktick___024root*>(voidSelf);
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vclktick___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vclktick___024root__trace_full_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((((((((((0U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state) 
                                    | (1U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                   | (2U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                  | (3U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                 | (4U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                                | (5U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                               | (6U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)) 
                              | (7U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state))
                              ? ((0U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                  ? 0U : ((1U == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                           ? 1U : (
                                                   (2U 
                                                    == vlSelf->clktick__DOT__f1_fsm__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
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
    bufp->fullIData(oldp+2,(vlSelf->clktick__DOT__f1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+3,(vlSelf->clktick__DOT__f1_fsm__DOT__next_state),32);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullBit(oldp+6,(vlSelf->en));
    bufp->fullSData(oldp+7,(vlSelf->N),16);
    bufp->fullBit(oldp+8,(vlSelf->tick));
    bufp->fullCData(oldp+9,(vlSelf->data_out),8);
    bufp->fullSData(oldp+10,(vlSelf->clktick__DOT__count),16);
    bufp->fullIData(oldp+11,(0x10U),32);
}
