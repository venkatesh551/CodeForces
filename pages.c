#include <stdio.h>

int main(void)
{

	int n, p, k, i, x, y, s;
		
	scanf("%d%d%d", &n, &p, &k);
	x = p - k;
	y = p + k;
	if (x > 1)
	{
		printf("<< ");
		s = x;
	}
	else
	{
		s = 1;
	}
	for (i = s; i < p; ++i)
	{
		printf("%d ", i);
	}
	printf("(%d) ", p);
	for (i = i+1; i <= n && i <= y; ++i)
	{
		printf("%d ", i);
	}
	if (y < n)
	{
		printf(">>");
	}
	printf("\n");
	return 0;
}
