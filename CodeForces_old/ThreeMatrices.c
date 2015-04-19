#include <stdio.h>

#define MAX_SIZE  171

void print_Matrix(double A[MAX_SIZE][MAX_SIZE], int n)
{
	int i, j;
	
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("%lf ", A[i][j]);
		}
		printf("\n");
	}

}

int main(void)
{
	int i, j, n, W[MAX_SIZE][MAX_SIZE];
	double A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%d", &W[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; ++j)
		{
			A[i][j] = (W[i][j] + W[j][i])/2.0;
			B[i][j] = W[i][j] - A[i][j];
		}
	}
	print_Matrix(A, n);
	print_Matrix(B, n);
	return 0;
}
