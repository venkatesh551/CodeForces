#include <stdio.h>

int min(int x, int y)
{
	return x < y ? x : y;
}

int main(void)
{
	int n, i, ans, j, a, b;
	
	scanf("%d", &n);
	ans = -1;
	for (i = 1; i <= 4; i++)
	{
		int v[4], x, y, temp;
		
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &v[j]);
		}
		x = min(v[0], v[1]);
		y = min(v[2], v[3]);
		temp = n - x;
		if (temp >= y)
		{
			ans = i; a = x; b = temp;	
		}
	}
	if (ans == -1)
	{
		printf("%d\n", ans);
	}
	else
	{	
		printf("%d %d %d\n", ans, a, b);
	}
	
	return 0;
}
