module f1start# (
    parameter WIDTH = 16
)(
    input logic clk,
    input logic rst,
    input logic trigger,
    input logic [WIDTH-1:0] N,
    output logic [7:0] data_out
);

    logic cmd_seq, cmd_delay, d0, d1, en;
    logic [6:0] K;

clktick #(WIDTH) clktick(
    .clk(clk),
    .N(N),
    .en(cmd_seq),
    .rst(rst),
    .tick(d1)
);

lfsr lfsr(
    .clk(clk),
    .rst(rst),
    .data_out(K)
);

delay #(7) delay(
    .clk(clk),
    .rst(rst),
    .n(K),
    .trigger(cmd_delay),
    .time_out(d0)
);

mux2 mux(
    .d0(d0),
    .d1(d1),
    .s(cmd_seq),
    .y(en)
);

f1_fsm f1_fsm(
    .clk(clk),
    .rst(rst),
    .en(en),
    .data_out(data_out),
    .trigger(trigger),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay)
);

endmodule
