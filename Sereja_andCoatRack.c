#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int i, n, m, d, A[101], sum, ans;
	
	scanf("%d%d", &n, &d);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
	}
	scanf("%d", &m);
	if (m < n)
	{
		ans  = 0;
		qsort(A, n, sizeof(int), compare);
		for (i = 0; i < m; i++)
		{
			ans += A[i];
		}
	}
	else
	{
		ans = sum - d * (m-n);
	}
	printf("%d\n", ans);
	return 0;
}
