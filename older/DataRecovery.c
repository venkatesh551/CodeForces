#include <stdio.h>

int main(void)
{
	int n, m, min, max, x, y;
	int a, b, i;
	
	scanf("%d%d%d%d%d", &n, &m, &min, &max, &x);
	a = b = x;
	for (i = 1; i < m; ++i)
	{
		scanf("%d", &x);
		
		if (x < a)
		{
			a = x;
		}
		if (x > b)
		{
			b = x;
		}
	}
	x = n - m;
	y = 2 - (a == min) - (b == max);
	if (a < min || b > max || x < y)
	{
		puts("Incorrect");
	}
	else
	{
		puts("Correct");
	}
	return 0;
}
