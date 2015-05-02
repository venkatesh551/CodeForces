#include <stdio.h>

int main(void)
{
	char s[7], t[7];
	int h, m, x, y;
	
	scanf("%s%s", s, t);
	h = (s[0] - '0') * 10 + (s[1] - '0');
	m = (s[3] - '0') * 10 + (s[4] - '0');
	x = (t[0] - '0') * 10 + (t[1] - '0');
	y = (t[3] - '0') * 10 + (t[4] - '0');
	if (h >= x)
	{
		h -= x;
	}
	else
	{
		h = 24 - x + h;
	}
	if (m >= y)
	{
		m -= y;
	}
	else
	{
		m = 60 + m - y;
		if (h == 0)
		{
			h = 23;
		}
		else
		{
			h--;
		}
	}
	printf("%d%d:%d%d\n",h/10, h %10, m/10, m%10);
	return 0;
}
