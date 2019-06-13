library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity neuron is 
	port(
		clk				: in std_logic;
		rst_n				: in std_logic;
	
		input_1			: in std_logic_vector(8 downto 0);
		input_2			: in std_logic_vector(8 downto 0);
		input_3			: in std_logic_vector(8 downto 0);
		input_4			: in std_logic_vector(8 downto 0);
		input_5			: in std_logic_vector(8 downto 0);
		
		weight_1			: in std_logic_vector(16 downto 0);
		weight_2			: in std_logic_vector(16 downto 0);
		weight_3			: in std_logic_vector(16 downto 0);
		weight_4			: in std_logic_vector(16 downto 0);
		weight_5			: in std_logic_vector(16 downto 0);
		
		start				: in std_logic;
		n_inputs_used	: in std_logic_vector(2 downto 0);
		
		result			: out std_logic_vector(8 downto 0);
		ready				: out std_logic
	);
end entity neuron;
		
architecture neuron_behaviour of neuron is
	type type_fstate is (SIDLE, SMUX, SDATA, SLOAD, SDEMUX, SADD, SSIG, SLUT);
	
	-- FSM
	signal fstate						: type_fstate;
	signal reg_fstate					: type_fstate;
	signal raise_sel_mux				: std_logic;
	
	-- data path
	signal input_reg					: std_logic_vector(8 downto 0);
	signal input_fixed				: std_logic_vector(16 downto 0);
	signal weight_reg					: std_logic_vector(16 downto 0);
	signal multiplicant				: std_logic_vector(33 downto 0);
	signal multi_1						: std_logic_vector(16 downto 0);
	signal multi_2						: std_logic_vector(16 downto 0);
	signal multi_3						: std_logic_vector(16 downto 0);
	signal multi_4						: std_logic_vector(16 downto 0);
	signal multi_5						: std_logic_vector(16 downto 0);
	signal sum							: std_logic_vector(16 downto 0);
	--signal sigma_reg					: std_logic_vector(16 downto 0);
	
	-- control signals
	signal sel_mux						: std_logic_vector(2 downto 0);
	signal load_data					: std_logic;
	signal load_multi					: std_logic;
	--signal load_sigma					: std_logic;
	signal load_lut					: std_logic;
	
	-- status signals
	signal finished					: std_logic;
	
begin
	
	-----------------------------------
	-- Data path
	-----------------------------------	
	
	-- Selects inputs and weights with a multiplexer and store in register
	data_register : process (clk, rst_n) is
	begin
		if rst_n = '0' then
			input_reg <= (others => '0');
			weight_reg <= (others => '0');
			input_fixed <= (others => '0');
		elsif rising_edge(clk) then
			case sel_mux is
				when "000" 	=>	input_reg 	<= input_1;
									weight_reg	<= weight_1;
				when "001" 	=>	input_reg 	<= input_2;
									weight_reg	<= weight_2;
				when "010" 	=>	input_reg 	<= input_3;
									weight_reg	<= weight_3;
				when "011" 	=>	input_reg 	<= input_4;
									weight_reg	<= weight_4;
				when "100" =>	input_reg 	<= input_5;
									weight_reg	<= weight_5;
				when others =>	input_reg 	<= (others => '0');
									weight_reg	<= (others => '0');
			end case;
			input_fixed <= (16 downto 8 => input_reg(8)) & input_reg(7 downto 0); 
		end if;
	end process data_register;
	
	-- Multiply input and weight
	multiply : process (clk, rst_n) is
	begin
		if rst_n = '0' then
			multiplicant <= (others => '0');
		elsif rising_edge(clk) then
			if load_data = '1' then
				-- signed to fixed Q8.8 + sign bit
				multiplicant <= std_logic_vector( signed(input_fixed) * signed(weight_reg));
			end if;
		end if;
	end process multiply;
	
	demultiplexer : process (clk, rst_n, start) is
	begin
		if rst_n = '0' then
			multi_1 <= (others => '0');
			multi_2 <= (others => '0');
			multi_3 <= (others => '0');
			multi_4 <= (others => '0');
			multi_5 <= (others => '0');
		elsif start = '0' then
			multi_1 <= (others => '0');
			multi_2 <= (others => '0');
			multi_3 <= (others => '0');
			multi_4 <= (others => '0');
			multi_5 <= (others => '0');		
		elsif rising_edge(clk) then
			if load_multi = '1' then			
				case sel_mux is 
				-- because multiplicant is Q16.16, so grep the part in the middle Q8.8
					when "000" => multi_1 <= multiplicant(24 downto 8);
					when "001" => multi_2 <= multiplicant(24 downto 8);
					when "010" => multi_3 <= multiplicant(24 downto 8);
					when "011" => multi_4 <= multiplicant(24 downto 8);
					when "100" => multi_5 <= multiplicant(24 downto 8);
					when others => multi_5 <= multiplicant(24 downto 8);
				end case;
			end if;
		end if;
 	end process demultiplexer;
	
	sigma : process (clk, rst_n) is
	begin
		if rst_n = '0' then
			sum <= (others => '0');
		elsif rising_edge(clk) then
			sum <= std_logic_vector(unsigned(multi_1(16) & multi_1(15 downto 0)) + unsigned(multi_2(16) & multi_2(15 downto 0)) + unsigned(multi_3(16) & multi_3(15 downto 0)) + unsigned(multi_4(16) & multi_4(15 downto 0)) + unsigned(multi_5(16) & multi_5(15 downto 0)));
		end if;
	end process sigma;
	
	--sigma_reg_load : process (clk, rst_n) is
	--begin
	--	if rst_n = '0' then
	--		sigma_reg <= (others => '0');
	--	elsif rising_edge(clk) then
	--		if load_sigma = '1' then
	--			sigma_reg <= sum;
	--		end if;
	--	end if;
	--end process sigma_reg_load;
	
	activation : entity work.transfer_function(transfer_function_behaviour)
		port map(clk => clk, rst_n => rst_n, load => load_lut, input => sum, y => result, eop => finished);
	
	-----------------------------------
	-- Finite State Machine
	-----------------------------------

	-- Update the present state
	state_reg : process (clk, reg_fstate) is 
	begin 
		if rising_edge(clk) then
			fstate <= reg_fstate;
		end if;
	end process state_reg;
	
	output_decoder : process (clk, rst_n, start) is
	begin
		if rst_n = '0' then
			raise_sel_mux <= '0';
			sel_mux <= (others => '0');
		elsif start = '0' then
			raise_sel_mux <= '0';
			sel_mux <= (others => '0');
		elsif rising_edge(clk) then
			if reg_fstate = SDEMUX then
				if unsigned(sel_mux) < unsigned(n_inputs_used) then 
					raise_sel_mux <= '0';
					sel_mux <= std_logic_vector(unsigned(sel_mux)+1);
				else 
					raise_sel_mux <= '1';
				end if;
			end if;
		end if;
	end process output_decoder;
			
	
	-- Decode the next state
	next_state_decoder : process (all) is
	begin
		if rst_n = '0' then
			reg_fstate <= SIDLE;
			ready <= '0';
		else
			case fstate is
				when SIDLE => 
					if start = '1' then
						ready <= '0';
						reg_fstate <= SMUX;
					else 
						reg_fstate <= SIDLE;
					end if;
				when SMUX =>
					reg_fstate <= SDATA;
				when SDATA =>
					reg_fstate <= SLOAD;
				when SLOAD =>
					reg_fstate <= SDEMUX;
				when SDEMUX => 
					--if unsigned(sel_mux) < unsigned(n_inputs_used) then 
					--	sel_mux <= std_logic_vector(unsigned(sel_mux)+1);
					--	reg_fstate <= SMUX;
					--else
					--	reg_fstate <= SADD;
					--end if;
					if raise_sel_mux = '0' then
						reg_fstate <= SMUX;
					else
						reg_fstate <= SADD;
					end if;
				when SADD => 
					reg_fstate <= SSIG;
				when SSIG =>
					reg_fstate <= SLUT;
				when SLUT =>
					if finished = '1' then
						ready <= '1';
						reg_fstate <= SIDLE;
						if start = '1' then
							reg_fstate <= SLUT;
						else 
							reg_fstate <= SIDLE;
						end if;
					else
						ready <= '0';
						reg_fstate <= SLUT;
					end if;
				when others =>
					reg_fstate <= SIDLE;
			end case;
		end if;
	end process next_state_decoder;
	
	load_data <= '1' when fstate = SDATA else '0';
	load_multi <= '1' when fstate = SLOAD else '0';
	--load_sigma <= '1' when fstate = SSIG else '0';
	load_lut <= '1' when fstate = SLUT else '0';
	
end architecture neuron_behaviour;