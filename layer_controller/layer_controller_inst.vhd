	component layer_controller is
		port (
			clk_clk          : in    std_logic                     := 'X';             -- clk
			leds_export      : out   std_logic_vector(7 downto 0);                     -- export
			n1i1_export      : out   std_logic_vector(8 downto 0);                     -- export
			n1i2_export      : out   std_logic_vector(8 downto 0);                     -- export
			n1ninputs_export : out   std_logic_vector(2 downto 0);                     -- export
			n1output_export  : in    std_logic_vector(8 downto 0)  := (others => 'X'); -- export
			n1ready_export   : in    std_logic                     := 'X';             -- export
			n1start_export   : out   std_logic;                                        -- export
			n1w1_export      : out   std_logic_vector(16 downto 0);                    -- export
			n1w2_export      : out   std_logic_vector(16 downto 0);                    -- export
			reset_reset      : in    std_logic                     := 'X';             -- reset
			sdram_clk_clk    : out   std_logic;                                        -- clk
			sdram_wire_addr  : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_wire_ba    : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_wire_cas_n : out   std_logic;                                        -- cas_n
			sdram_wire_cke   : out   std_logic;                                        -- cke
			sdram_wire_cs_n  : out   std_logic;                                        -- cs_n
			sdram_wire_dq    : inout std_logic_vector(15 downto 0) := (others => 'X'); -- dq
			sdram_wire_dqm   : out   std_logic_vector(1 downto 0);                     -- dqm
			sdram_wire_ras_n : out   std_logic;                                        -- ras_n
			sdram_wire_we_n  : out   std_logic;                                        -- we_n
			n1i3_export      : out   std_logic_vector(8 downto 0);                     -- export
			n1w3_export      : out   std_logic_vector(16 downto 0)                     -- export
		);
	end component layer_controller;

	u0 : component layer_controller
		port map (
			clk_clk          => CONNECTED_TO_clk_clk,          --        clk.clk
			leds_export      => CONNECTED_TO_leds_export,      --       leds.export
			n1i1_export      => CONNECTED_TO_n1i1_export,      --       n1i1.export
			n1i2_export      => CONNECTED_TO_n1i2_export,      --       n1i2.export
			n1ninputs_export => CONNECTED_TO_n1ninputs_export, --  n1ninputs.export
			n1output_export  => CONNECTED_TO_n1output_export,  --   n1output.export
			n1ready_export   => CONNECTED_TO_n1ready_export,   --    n1ready.export
			n1start_export   => CONNECTED_TO_n1start_export,   --    n1start.export
			n1w1_export      => CONNECTED_TO_n1w1_export,      --       n1w1.export
			n1w2_export      => CONNECTED_TO_n1w2_export,      --       n1w2.export
			reset_reset      => CONNECTED_TO_reset_reset,      --      reset.reset
			sdram_clk_clk    => CONNECTED_TO_sdram_clk_clk,    --  sdram_clk.clk
			sdram_wire_addr  => CONNECTED_TO_sdram_wire_addr,  -- sdram_wire.addr
			sdram_wire_ba    => CONNECTED_TO_sdram_wire_ba,    --           .ba
			sdram_wire_cas_n => CONNECTED_TO_sdram_wire_cas_n, --           .cas_n
			sdram_wire_cke   => CONNECTED_TO_sdram_wire_cke,   --           .cke
			sdram_wire_cs_n  => CONNECTED_TO_sdram_wire_cs_n,  --           .cs_n
			sdram_wire_dq    => CONNECTED_TO_sdram_wire_dq,    --           .dq
			sdram_wire_dqm   => CONNECTED_TO_sdram_wire_dqm,   --           .dqm
			sdram_wire_ras_n => CONNECTED_TO_sdram_wire_ras_n, --           .ras_n
			sdram_wire_we_n  => CONNECTED_TO_sdram_wire_we_n,  --           .we_n
			n1i3_export      => CONNECTED_TO_n1i3_export,      --       n1i3.export
			n1w3_export      => CONNECTED_TO_n1w3_export       --       n1w3.export
		);

