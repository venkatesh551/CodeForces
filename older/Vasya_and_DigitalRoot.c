#include <stdio.h>

int main()
{
	int k, d;

	scanf("%d%d",&k,&d);
	if( k > 1 && d == 0)
	{
		printf("No solution");
	}
	else
	{
		int i;
		
		putchar(d + '0');
		for (i = 1; i < k; i++)
		{
			putchar('0');
		}
	}
	putchar('\n');
	return 0;
}
