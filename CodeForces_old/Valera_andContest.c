#include <stdio.h>

int main(void)
{
	int v[6], i, A[1000], x , y;
	
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &v[i]);
	}
	x = v[5] / v[1];
	y = v[5] % v[1];
	for (i = 0; i < v[1]; i++)
	{
		A[i] = x;
	}
	for (i = 0; i < y; i++)
	{
		A[i]++;
	}
	for (i = 0; i < v[1]; i++)
	{
		printf("%d ", A[i]);
	}
	x = (v[4] - v[5]) / (v[0] - v[1]);
	y = (v[4] - v[5]) % (v[0] - v[1]);
	for (i = 0; i < (v[0]-v[1]); i++)
	{
		A[i] = x;
	}
	for (i = 0; i < y; i++)
	{
		A[i]++;
	}
	for (i = 0; i < (v[0]-v[1]); i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}
