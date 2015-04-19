#include <stdio.h>

void print_bar(int n)
{
	while (n-- > 0)
		putchar('|');
}

int main(void)
{
	char S[1001];
	int i, A, B, C, sum, len;
	
	scanf("%s", S);
	for (i = 0; S[i] != '+'; i++)
		;
	A = i;
	for (i = i+1; S[i] != '='; i++)
		;
	B= i - A - 1;
	for (i = i+1; S[i]; ++i)
		;
	sum = A + B;
	len = i;
	C = i - (sum+2);
	if (sum == C)
	{	
		printf("%s", S);
	}
	else if (sum + 1 == C - 1)
	{
		S[len-1] = 0;
		printf("|%s", S);
	}
	else if (sum - 1 == C + 1)
	{
		if (A > 1)
		{
			print_bar(A-1);
			putchar('+');
			print_bar(B);
		}
		else
		{
			print_bar(A);
			putchar('+');
			print_bar(B-1);
		}
		putchar('=');
		print_bar(C+1);
	}
	else
	{
		printf("Impossible");
	}
	printf("\n");
	return 0;
}
