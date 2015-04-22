#include <stdio.h>
int min(int x, int y)
{

	return x < y ? x : y;
}

int main()
{
	
	int c[5], n, m, x, y, i, ans, temp;

	for (i = 1; i < 5; i++)
	{
		scanf("%d", &c[i]);
	}
	scanf("%d%d", &n, &m);
	x = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		x += min(temp * c[1], c[2]);
	}	
	y = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		y += min(temp * c[1], c[2]);
	}

	ans = min(c[3], x) + min(c[3], y);
	ans = min(ans, c[4]);
	printf("%d\n", ans);

	return 0;
}
