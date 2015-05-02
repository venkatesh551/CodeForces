#include <stdio.h>
#include <stdlib.h>

int cmp (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int n, k, A[2001], i, ans;
	
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
	}
	qsort (A, n, sizeof(int), cmp);
	ans = 0;
	for (i = 2; i < n && (A[i] + k) <= 5; i += 3)
	{
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
