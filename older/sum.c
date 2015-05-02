#include <stdio.h>

void digits(int *A, int n)
{
	int i;
	
	for (i = 9; n > 0 ;--i)
	{
		A[i] = n % 10;
		n /= 10;
	}
}
void print_sum(int *A, int *B)
{
	int i;
	
	for (i = 9; i >= 0; i--)
	{
		int x = A[i] + B[i];
		
		if (x > 0)
		{
			printf("%d", x%10);
		}
	}
	printf("\n");
}


int main(void)
{
	int a, b, A[10] = {0}, B[10] = {0};
	
	scanf("%d%d", &a, &b);
	digits(A, a);
	digits(B, b);
	print_sum(A, B);
	return 0;
}
