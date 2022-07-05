--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

package ALU_OP is

function f_log2 (x : positive) return natural;
function f_sqrt (number: integer) return integer;
function f_pow (number: integer; pow: integer) return integer;
function f_div (number_1: integer; number_2: integer) return integer;

procedure Calculator (
	variable number_1, number_2: in integer; 
	variable operator: in std_logic_vector(2 downto 0); 
	variable result: inout integer
);

end ALU_OP;

package body ALU_OP is
function f_log2 (x : positive) return natural is
      variable i : natural;
   begin
      i := 0;  
      while (2**i < x) and i < 31 loop
         i := i + 1;
      end loop;
      return i;
end function;


function f_sqrt (number: integer ) return integer is

 variable current_number : integer := 1;
 variable result: integer;
begin

		while(current_number*current_number <= number) loop
			current_number := current_number+1;
		
		end loop;
		result := current_number-1;
		return result;

end function;

function f_pow (number: integer; pow: integer ) return integer is

 variable count : integer := 1;
 variable result: integer := number;
begin

		while(count < pow) loop
			result := number*result;
			count := count+1;
		end loop;
		
		return result;

end function;

function f_div (number_1: integer; number_2: integer ) return integer is

 variable count : integer := 0;
 variable current_number: integer := 0;
begin

		while(current_number < number_1) loop
			current_number := current_number+number_2;
			count := count+1;
		end loop;
		if(current_number > number_1) then count := count-1;
		end if;
		return count;

end function;



procedure Calculator (
	variable number_1, number_2: in integer; 
	variable operator: in std_logic_vector(2 downto 0); 
	variable result: inout integer
) is 

begin



case operator is 

	when "000" =>  result := number_1+number_2 ;
	when "001" =>  result := number_1-number_2 ;
	when "010" =>  result := number_1*number_2 ;
	when "011" => result := f_div(number_1,number_2) ;
	when "100" => result := f_pow(number_1,number_2) ;
	when "101" => result := f_log2(number_1);
	when "110" => result := f_sqrt(number_1) ;
	when others => result := number_1+number_2 ;
end case;


end procedure Calculator;
 
end ALU_OP;
