#include <stdio.h>

#define MAX_P 1000000009
#define MAX_SIZE 100001
static int A[MAX_SIZE];

int main(void)
{
	int n, k, i, min, min_idx;
	
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)
	{	
		scanf("%d", &A[i]);
	}
	min = MAX_P;
	min_idx = 0;
	
	for (i = 0; i < k; i++)
	{
		int j, sum = 0;
		
		for (j = i; j < n; j += k)
		{
			sum += A[j];
		}
		if (sum < min)
		{
			min = sum;
			min_idx = i;
		}
	}
	printf("%d\n", min_idx + 1);
	return 0;
}
