with Ada.Text_IO, Ada.Integer_Text_IO;
use Ada.Text_IO, Ada.Integer_Text_IO;

procedure CountingFridays is

	type INTEGER   is range    0 .. 6;
	type INT is range 0 .. 20000;
  	type MY_ARRAY is array(1..12) of INTEGER;
	month     : MY_ARRAY;
	x : INT;

begin
	month(1) := 0;
	month(2) := 3;
	month(3) := 2;
	month(4) := 5;
	month(5) := 0;
	month(6) := 3;
	month(7) := 5;
	month(8) := 1;
	month(9) := 4;
	month(10) := 6;
	month(11) := 2;
	month(12) := 4;
	Get(x);
	y := y - m < 3;
    ans := y + y/4 - y/100 + y/400 + t(m-1) + d mod 7;

end CountingFridays;
