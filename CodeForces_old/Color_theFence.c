#include <stdio.h>

int main()
{

	int i, v, d[10], flag;

	scanf("%d", &v);
	flag = 0;
	for(i = 1; i < 10 ; i++)
	{
		int x;
		scanf("%d", &x);
		d[i] = x;
		flag |= (x <= v);
	}
	if(flag == 0)
	{
		puts("-1");
	}
	else
	{
		int max = 0, digit;
		for(i = 9; i > 0; i--)
		{
			int p = v / d[i];
			if(max < p)
			{
				max = p;
				digit = i;
			}
		}
		for(i = 0; i < max; i++)
			printf("%d",digit);
		putchar('\n');
	}

	return 0;
}
