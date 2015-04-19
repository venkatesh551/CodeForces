#include <stdio.h>

int main(void)
{
	int n, k, c;
	
	scanf("%d%d", &n, &k);
	c = 0;
	while (n--)
	{
		char num[12];
		int i, f, d[10] = {0};
		
		scanf("%s",num);
		for (i = 0; num[i] != 0; i++)
		{
			d[num[i]-'0'] = 1;
		}
		f = 0;
		for (i = 0; i <=k && f == 0; i++)
		{
			if (d[i] == 0)
			{
				f = 1;
			}
		}
		if (f == 0)
		{
			c++;
		}
	}
	printf("%d\n", c);
	return 0;
}
