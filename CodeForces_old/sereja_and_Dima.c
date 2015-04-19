#include <stdio.h>

int main(void)
{
	int n, i, j, k, A[1001], s_sum, d_sum;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
	}
	s_sum = d_sum = 0;
	for (i = 0, j = n-1, k = 0; i <= j ; k = 1-k)
	{
		int x;
		
		if (A[i] > A[j])
		{
			x = A[i]; i++;
		}
		else
		{
			x = A[j]; j--;
		}
		if (k == 0)
		{
			s_sum += x;
		}
		else
		{
			d_sum += x;
		}
	}
	printf("%d %d\n", s_sum, d_sum);
	return 0;
}
