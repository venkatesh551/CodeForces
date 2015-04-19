#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{

	int A[100], N, i, temp;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &A[i]);
	qsort(A, N, sizeof(int), compare);
	temp = A[0];
	A[0] = A[N-1];
	A[N-1] = temp;
	for(i = 0; i < N; i++)
		printf("%d ", A[i]);
	putchar('\n');
	return 0;
}
