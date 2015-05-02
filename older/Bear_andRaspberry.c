#include <stdio.h>

int main(void)
{
	int n, c, i, A[101], max = 0;
	
	scanf("%d%d", &n, &c);
	for (i = 0; i < n ; ++i)
	{
		scanf("%d", &A[i]);
	}
	for (i = 0; i < n-1; ++i)
	{
		int x = A[i] - A[i+1] - c;
		if (x > max)
		{
			max = x;
		}
	}
	printf("%d\n", max);
	return 0;
}
