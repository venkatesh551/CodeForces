#include <stdio.h>

int main(void)
{
	int n, p, ans;
	
	scanf("%d", &n);
	p = ans = 0;
	while (n-- > 0)
	{
		int x;
		
		scanf("%d", &x);
		if (x == -1)
		{
			if (p > 0)
				p--;
			else
				ans++;
		}
		else
			p += x;
	}
	printf("%d\n", ans);
	return 0;
}
