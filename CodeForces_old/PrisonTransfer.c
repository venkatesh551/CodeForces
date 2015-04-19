#include <stdio.h>
#define MAX_SIZE 200001
int main(void)
{
	int n, t, c, i, ans, A[MAX_SIZE];
	
	scanf("%d%d%d", &n, &t, &c);
	A[0] = 0;
	for (i = 1; i <= n; ++i)	
	{
		scanf("%d", &A[i]);
		A[i] = A[i-1] + (A[i] <= t);
	}
	ans  = 0;
	for (i = c; i <= n ; i++)
	{
		if (A[i] - A[i-c] == c)
		{
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
