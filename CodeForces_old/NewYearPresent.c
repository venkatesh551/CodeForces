#include <stdio.h>

void printAndDec(int *p, int *sum)
{
	if (*p > 0)
	{
		putchar('P');
		(*p)--;
		(*sum)--;
	}
}

int main(void)
{
	int i, n, A[301], sum = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
		sum += A[i];
	}
	while (sum > 0)
	{
		for (i = 0; i < n-1; ++i)
		{
			printAndDec(&A[i], &sum);
			putchar('R');			
		}
		printAndDec(&A[i], &sum);
		putchar('L');
		for (i = n-2; i > 0; --i)
		{
			printAndDec(&A[i], &sum);
			putchar('L');			
		}
	}
	putchar('\n');
	return 0;
}
