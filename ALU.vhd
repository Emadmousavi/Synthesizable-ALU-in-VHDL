----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:44:15 07/04/2022 
-- Design Name: 
-- Module Name:    alu - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
library work;
use work.ALU_OP.all;


entity ALU is
port(
	operators: in std_logic_vector(8 downto 0);
	numbers: in std_logic_vector(31 downto 0); 
	output: out std_logic_vector(31 downto 0)
	);
end ALU;

architecture Behavioral of ALU is

begin

calculate : process(operators,numbers)

variable first_operator : std_logic_vector(2 downto 0);
variable second_operator : std_logic_vector(2 downto 0);
variable third_operator : std_logic_vector(2 downto 0);

variable first_number : integer;
variable second_number : integer;
variable third_number : integer;
variable fourth_number : integer;

variable first_result : integer;
variable second_result : integer;
variable main_result : integer;


begin

	first_operator := operators(8 downto 6);
	second_operator := operators(5 downto 3);
	third_operator := operators(2 downto 0);

	first_number := to_integer(signed(numbers(31 downto 24)));
	second_number := to_integer(signed(numbers(23 downto 16)));
	third_number := to_integer(signed(numbers(15 downto 8)));
	fourth_number := to_integer(signed(numbers(7 downto 0)));
	

	Calculator(first_number,second_number,first_operator,first_result);
	Calculator(third_number,fourth_number,third_operator,second_result);
	Calculator(first_result,second_result,second_operator,main_result);

	output <= std_logic_vector(to_signed(main_result, output'length));

end  process calculate;

end Behavioral;

