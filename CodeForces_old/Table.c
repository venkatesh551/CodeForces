#include <stdio.h>

int main(void)
{
	int n, k, i, j;
	
	scanf("%d%d", &n,&k);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			int x = 0;
			
			if (i == j)
			{
				x = k;
			}
			printf("%d ", x);
		}
		printf("\n");
	}
	return 0;
}
