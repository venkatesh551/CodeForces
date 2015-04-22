#include <stdio.h>

int main(void)
{
	int n, ans, i, j, c[2] = {'C', '.'};
	
	scanf("%d", &n);
	ans = n * n;
	if (n & 1)
	{
		ans++;
	}
	printf("%d\n", ans/2);
	for (i = 0; i < n; ++i)
	{
		int x = i & 1, s = c[x];
		
		for (j = 0; j < n; ++j) 
		{
			putchar(s);
			x = 1-x;
			s = c[x];
		}
		putchar('\n');
	}	
	return 0;
}
