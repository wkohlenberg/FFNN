--
-- This file is an automatically generated VHDL testbench
-- by MakeTestBench (version 1.703)
-- 
-- Created on     :  23 May 2019
--    with option :  -package numeric_std
--
-- Tested entity        :  neuron
-- Tested entity from   :  neuron.vhd
--
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity testbench is
end entity testbench;

architecture tb_neuron of testbench is
	component neuron is
		port (
			clk : in std_logic;
			rst_n : in std_logic;
			input_1 : in std_logic_vector(8 downto 0);
			input_2 : in std_logic_vector(8 downto 0);
			input_3 : in std_logic_vector(8 downto 0);
			input_4 : in std_logic_vector(8 downto 0);
			input_5 : in std_logic_vector(8 downto 0);
			weight_1 : in std_logic_vector(16 downto 0);
			weight_2 : in std_logic_vector(16 downto 0);
			weight_3 : in std_logic_vector(16 downto 0);
			weight_4 : in std_logic_vector(16 downto 0);
			weight_5 : in std_logic_vector(16 downto 0);
			start : in std_logic;
			n_inputs_used : in std_logic_vector(2 downto 0);
			result : out std_logic_vector(8 downto 0);
			ready : out std_logic
		);
	end component neuron;

	for uut : neuron use entity work.neuron(neuron_behaviour);


	signal clk : std_logic := '0';
	signal rst_n : std_logic;
	signal input_1 : std_logic_vector(8 downto 0);
	signal input_2 : std_logic_vector(8 downto 0);
	signal input_3 : std_logic_vector(8 downto 0);
	signal input_4 : std_logic_vector(8 downto 0);
	signal input_5 : std_logic_vector(8 downto 0);
	signal weight_1 : std_logic_vector(16 downto 0);
	signal weight_2 : std_logic_vector(16 downto 0);
	signal weight_3 : std_logic_vector(16 downto 0);
	signal weight_4 : std_logic_vector(16 downto 0);
	signal weight_5 : std_logic_vector(16 downto 0);
	signal start : std_logic;
	signal n_inputs_used : std_logic_vector(2 downto 0);
	signal result : std_logic_vector(8 downto 0);
	signal ready : std_logic;


--
-- place your own declarations here
--
	constant HALF_CLOCK_PERIOD : time := 10 ns;
	constant RESET_PERIOD  : time := 2 ns;

begin
	uut : neuron port map (
		clk => clk,
		rst_n => rst_n,
		input_1 => input_1,
		input_2 => input_2,
		input_3 => input_3,
		input_4 => input_4,
		input_5 => input_5,
		weight_1 => weight_1,
		weight_2 => weight_2,
		weight_3 => weight_3,
		weight_4 => weight_4,
		weight_5 => weight_5,
		start => start,
		n_inputs_used => n_inputs_used,
		result => result,
		ready => ready
	);

--
-- place your own stimuli here
--
	clk <= not clk after HALF_CLOCK_PERIOD;
	rst_n <= '0', '1' after RESET_PERIOD;

	-- process is
	-- begin
	-- 	input_1 		<= "011111111";				-- 0.99609375
	-- 	input_2 		<= "011111111";				-- 0.99609375
	-- 	input_bias 	<= "011111111";				-- 0.99609375
		
	-- 	weight_1 	<= "00000000100110110";				-- 1.2109375
	-- 	weight_2		<= "00000000101010010";				-- 1.3203125
	-- 	weight_bias	<= "00000000000010010";				-- 0.0703125
		
	-- 	wait for 2 * HALF_CLOCK_PERIOD;
		
	-- 	start <= '1';
	-- 	n_inputs_used <= "010";								-- 3 - 1 (because counting from zero)
		
	-- end process;
	
	-- signal_generator : process is
	-- begin
	-- 	input_1 		<= "011111111";				-- 0.99609375
	-- 	input_2 		<= "000000000";				-- 0.0
	-- 	input_3 		<= "011111111";				-- 0.99609375
	-- 	input_4 		<= "000000000";				-- 0.99609375
	-- 	input_bias 		<= "011111111";				-- 0.99609375
		
	-- 	weight_1 	<= "00000000100110110";				-- 1.2109375
	-- 	weight_2		<= "00000000101010010";				-- 1.3203125
	-- 	weight_3		<= "00000000001001111";				-- 0.30859375
	-- 	weight_4		<= "00000000111011111";				-- 1.8709375
	-- 	weight_bias	<= "00000000000010010";				-- 0.0703125
		
	-- 	wait for 2 * HALF_CLOCK_PERIOD;
		
	-- 	start <= '1';
	-- 	n_inputs_used <= "100";
	-- end process signal_generator;
	
	signal_generator : process is
	begin
		input_1 		<= "011111111";				-- 0.99609375
		input_2 		<= "000000000";				-- 0.0
		input_3		<= "011111111";				-- 0.99609375
		
		weight_1 	<= "00000000100110110";				-- 1.2109375
		weight_2		<= "00000000101010010";				-- 1.3203125
		weight_3		<= "00000000001001111";				-- 0.30859375
		
		wait for 6 * HALF_CLOCK_PERIOD;
		
		start <= '1';
		n_inputs_used <= "010";
		
		wait for 350 ns;
		start <= '0';
		
		input_1 		<= "011111111";				-- 0.99609375
	 	input_2 		<= "011111111";				-- 0.99609375
		
	 	weight_1 	<= "00000000100110110";				-- 1.2109375
	 	weight_2		<= "00000000101010010";				-- 1.3203125
		
	 	wait for 2 * HALF_CLOCK_PERIOD;
		
	 	start <= '1';
	 	n_inputs_used <= "001";				

		wait;
		
	end process signal_generator;
	
end architecture tb_neuron;

