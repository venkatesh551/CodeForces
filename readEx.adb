with text_io; use text_io;
     
     procedure main is
           name1  : STRING(1..30);
           n : integer := 5;
           line : STRING(1..80);
     begin
           get_line (standard_input, line, n);
           name1(1..n) := line(1..n);
		   put_write(n);
           put (name1);
     end main;
