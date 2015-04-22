#include <stdio.h>

static int sum[150001];
int main(void)
{
	int n, k, total, min, i, min_idx;
	
	scanf("%d%d", &n, &k);
	total = sum[0] =  0;
	for (i = 1; i <= n; i++)
	{
		int x;
		
		scanf("%d", &x);
		total += x;
		sum[i] = total;
	}
	min = total;
	min_idx = 1;
	for (i = k; i <= n; i++)
	{
		int x = sum[i] - sum[i-k];
		if (x < min)
		{
			min = x;
			min_idx = i-k+1;
		}
	}
	printf("%d\n", min_idx);
	
	return 0;
}
