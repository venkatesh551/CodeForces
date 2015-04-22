#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main(void)
{
	int m, i, j, k, A[5001], f[5001], r[5001], cnt;
	
	scanf("%d", &m);
	for (i = 0; i < m ; ++i)
	{
		scanf("%d", &A[i]);
	}
	qsort(A, m, sizeof(int), compare);
	cnt = 1;
	j = k = 0;
	for (i = 1; i < m ; ++i)
	{
		if (A[i] > A[i-1])
		{
			f[j++] = A[i-1];
			if (cnt > 1)
			{
				r[k++] = A[i-1];
			}
			cnt = 1;
		}	
		else
		{
			cnt++;
		}
	}
	f[j++] = A[i-1];
	printf("%d\n", j + k);
	for (i = 0; i < j ; ++i)
		printf("%d ", f[i]);
	for (i = k-1; i >= 0 ; --i)
		printf("%d ", r[i]);
	printf("\n");
	return 0;
}
