#include <stdio.h>

int main(void)
{
	int n, k, x, i;
	
	scanf("%d%d", &n,&k);
	if (n == k)
	{
		puts("-1");
		return 0;
	}
	x = n-k;
	for (i = 1; i < x; i++)
	{
		printf("%d ", i+1);
	}
	printf("1 ");
	for (i = x+1; i <= n; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}
