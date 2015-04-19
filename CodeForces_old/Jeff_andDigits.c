#include <stdio.h>

int main()
{

	int n, x, y, i;

	scanf("%d",&n);
	x = y = 0;
	for (i = 0; i < n; i++)
	{
		int num;
	
		scanf("%d",&num);
		if (num == 0)
		{
			x++;
		}
		else
		{
			y++;
		}
	}
	if (x == 0)
	{
		puts("-1");
	}
	else
	{
		int a = y / 9 ;

		for (i = a; i > 0 ; i--)
		{
			printf("555555555");
		}
		if (a == 0)
		{
			x = 1;
		}
		for (i = x; i > 0; i--)
		{
			printf("0");
		}
		printf("\n");
	}

	return 0;
}
