
module layer_controller (
	clk_clk,
	leds_export,
	n1i1_export,
	n1i2_export,
	n1ninputs_export,
	n1output_export,
	n1ready_export,
	n1start_export,
	n1w1_export,
	n1w2_export,
	reset_reset,
	sdram_clk_clk,
	sdram_wire_addr,
	sdram_wire_ba,
	sdram_wire_cas_n,
	sdram_wire_cke,
	sdram_wire_cs_n,
	sdram_wire_dq,
	sdram_wire_dqm,
	sdram_wire_ras_n,
	sdram_wire_we_n,
	n1i3_export,
	n1w3_export);	

	input		clk_clk;
	output	[7:0]	leds_export;
	output	[8:0]	n1i1_export;
	output	[8:0]	n1i2_export;
	output	[2:0]	n1ninputs_export;
	input	[8:0]	n1output_export;
	input		n1ready_export;
	output		n1start_export;
	output	[16:0]	n1w1_export;
	output	[16:0]	n1w2_export;
	input		reset_reset;
	output		sdram_clk_clk;
	output	[12:0]	sdram_wire_addr;
	output	[1:0]	sdram_wire_ba;
	output		sdram_wire_cas_n;
	output		sdram_wire_cke;
	output		sdram_wire_cs_n;
	inout	[15:0]	sdram_wire_dq;
	output	[1:0]	sdram_wire_dqm;
	output		sdram_wire_ras_n;
	output		sdram_wire_we_n;
	output	[8:0]	n1i3_export;
	output	[16:0]	n1w3_export;
endmodule
