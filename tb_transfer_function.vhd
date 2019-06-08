--
-- This file is an automatically generated VHDL testbench
-- by MakeTestBench (version 1.703)
-- 
-- Created on     :  26 May 2019
--    with option :  -package numeric_std
--
-- Tested entity        :  transfer_function
-- Tested entity from   :  transfer_function.vhd
--
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity testbench_transfer is
end entity testbench_transfer;

architecture tb_transfer_function of testbench_transfer is
  component transfer_function is
    port (
      clk : in std_logic;
      rst_n : in std_logic;
		load  : in std_logic;
      input : in std_logic_vector(16 downto 0);
      y : out std_logic_vector(8 downto 0);
		eop : out std_logic
    );
  end component transfer_function;

  for uut : transfer_function use entity work.transfer_function(transfer_function_behaviour);


  signal clk : std_logic := '0';
  signal rst_n : std_logic;
  signal load : std_logic;
  signal input : std_logic_vector(16 downto 0);
  signal y : std_logic_vector(8 downto 0);
  signal eop : std_logic;


--
-- place your own declarations here
--
	constant HALF_CLOCK_PERIOD : time := 10 ns;
	constant RESET_PERIOD  : time := 2 ns;

begin
  uut : transfer_function port map (
    clk => clk,
    rst_n => rst_n,
	 load => load,
    input => input,
    y => y,
	 eop => eop
  );

--
-- place your own stimuli here
--

  clk <= not clk after HALF_CLOCK_PERIOD;
  rst_n <= '0', '1' after RESET_PERIOD;
  load <= '0', '1' after 4*HALF_CLOCK_PERIOD;
  
  signal_generator : process is
  begin
	  input <= "00000000000000000";
	  wait for 10 ns;
	  input <= "11111011100000000";
	  wait for 100 ns;	  
	  input <= "00000010000000000";
	  wait for 50 ns;
	  input <= "00000000110000000";
	  wait for 50 ns;
	  input <= "11111110100000001";
	  wait for 50 ns;
	  input <= "11111111101000111";
	  wait;
  end process signal_generator;

end architecture tb_transfer_function;

