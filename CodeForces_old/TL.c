#include <stdio.h>

int main()
{
	int n, m, i, flag;
	int min_w, min_c, max_c;

	scanf("%d%d",&n, &m);
	min_c = 101;
	max_c = 0;
	for(i = 0; i < n; i++)
	{
		int x;

		scanf("%d",&x);		
		if(x < min_c)
		{
			min_c = x;
		}
		if(x > max_c)
		{
			max_c = x;
		}
	}
	min_w = 101;
	for(i = 0; i < m; i++)
	{
		int x;

		scanf("%d",&x);
		if(x < min_w)
		{
			min_w = x;
		}
	}
	flag = 0;
	for (i = max_c; i < min_w; i++)
	{
		if (2 * min_c <= i)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("%d\n", i);
	}
	else
	{
		puts("-1");
	}
	return 0;
}
