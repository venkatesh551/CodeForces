#include <stdio.h>

#define MAX_VALUE 1000000007
int main(void)
{
	int n, i, A[101], ans, j;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
	}
	ans = MAX_VALUE;
	for (i = 0; i < n; ++i)
	{
		int sum = 0;
		for (j = 0; j < A[i]; ++j)
		{
			int x;
			
			scanf("%d", &x);
			sum += x;
		}
		sum = sum * 5 + A[i] * 15;
		if (ans > sum)
		{
			ans = sum;
		}
	}
	printf("%d\n", ans);
	return 0;
}
