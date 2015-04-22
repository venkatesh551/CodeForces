#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a);
}

int main(void)
{
	int n, i, k, A[101];
	
	scanf("%d%d", &n, &k);
	for (i = 0; i < n ; ++i)
	{
		scanf("%d", &A[i]);
	}
	qsort(A, n, sizeof(int), compare);
	printf("%d\n", A[k-1]);
	return 0;
}
