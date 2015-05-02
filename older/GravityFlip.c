#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void)
{

	int n, i, A[101];

	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", &A[i]);
	qsort(A, n, sizeof(int), compare);
	for (i = 0; i < n; ++i)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}
