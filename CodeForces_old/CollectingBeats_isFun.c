#include <stdio.h>

int main(void)
{
	int i, k, a[10] = {0};
	
	scanf("%d", &k);
	for (i = 0; i < 4; ++i)
	{
		char str[6];
		int j;
			
		scanf("%s", str);
		for (j = 0; str[j] ; ++j)
		{
			if (str[j] != '.')
			{
				int v = str[j] - '0' ;
				a[v]++;
			}
		}
	}
	k += k;
	for (i = 1; i < 10 && a[i] <= k; ++i)
		;
	if (i == 10)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}
		
	return 0;
}
