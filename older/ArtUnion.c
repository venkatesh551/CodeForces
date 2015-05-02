#include <stdio.h>

#define MAX_PICTURES 50001
#define MAX_PAINTERS 5

int main(void)
{
	int m, n, t[MAX_PICTURES][MAX_PAINTERS];
	int d, ans[MAX_PICTURES] = {0};
	int i, j;
	
	scanf("%d%d", &m, &n);
	for (i = 0; i < m ; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d", &t[i][j]);
		}
	}
	for (j = 0; j < n; ++j)
	{
		ans[0] += t[0][j]; 
		for (i = 1; i < m; i++)
		{
			if (ans[i-1] > ans[i])
			{
				d = ans[i-1] - ans[i];
			}
			else
			{
				d = 0;
			}
			ans[i] += d + t[i][j]; 	
		}
	}
	for (i = 0; i < m; ++i)
	{
		printf("%d ", ans[i]);
	}
	printf("\n");
	return 0;
}
