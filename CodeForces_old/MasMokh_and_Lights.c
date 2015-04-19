#include <stdio.h>

int main(void)
{
	int n, m, i, j, B[101] = {0};
	
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++)
	{
		int x;
		
		scanf("%d", &x);
		for (j = x; j <= n && B[j] == 0; j++)
		{
			B[j] = x;
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	return 0;
}
