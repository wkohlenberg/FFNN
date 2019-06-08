	layer_controller u0 (
		.clk_clk          (<connected-to-clk_clk>),          //        clk.clk
		.leds_export      (<connected-to-leds_export>),      //       leds.export
		.n1i1_export      (<connected-to-n1i1_export>),      //       n1i1.export
		.n1i2_export      (<connected-to-n1i2_export>),      //       n1i2.export
		.n1ninputs_export (<connected-to-n1ninputs_export>), //  n1ninputs.export
		.n1output_export  (<connected-to-n1output_export>),  //   n1output.export
		.n1ready_export   (<connected-to-n1ready_export>),   //    n1ready.export
		.n1start_export   (<connected-to-n1start_export>),   //    n1start.export
		.n1w1_export      (<connected-to-n1w1_export>),      //       n1w1.export
		.n1w2_export      (<connected-to-n1w2_export>),      //       n1w2.export
		.reset_reset      (<connected-to-reset_reset>),      //      reset.reset
		.sdram_clk_clk    (<connected-to-sdram_clk_clk>),    //  sdram_clk.clk
		.sdram_wire_addr  (<connected-to-sdram_wire_addr>),  // sdram_wire.addr
		.sdram_wire_ba    (<connected-to-sdram_wire_ba>),    //           .ba
		.sdram_wire_cas_n (<connected-to-sdram_wire_cas_n>), //           .cas_n
		.sdram_wire_cke   (<connected-to-sdram_wire_cke>),   //           .cke
		.sdram_wire_cs_n  (<connected-to-sdram_wire_cs_n>),  //           .cs_n
		.sdram_wire_dq    (<connected-to-sdram_wire_dq>),    //           .dq
		.sdram_wire_dqm   (<connected-to-sdram_wire_dqm>),   //           .dqm
		.sdram_wire_ras_n (<connected-to-sdram_wire_ras_n>), //           .ras_n
		.sdram_wire_we_n  (<connected-to-sdram_wire_we_n>),  //           .we_n
		.n1i3_export      (<connected-to-n1i3_export>),      //       n1i3.export
		.n1w3_export      (<connected-to-n1w3_export>)       //       n1w3.export
	);

