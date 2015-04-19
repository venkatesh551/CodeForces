#include <stdio.h>

int main(void)
{
	int a, b, ans;
	
	scanf("%d%d", &a, &b);
	ans = 0;
	while (a != b)
	{
		if (a < b)
		{
			int x = a;
			a = b;
			b = x;
		}
		if (a % 2 == 0)
		{
			a /= 2;
		}
		else if (a % 3 == 0)
		{
			a /= 3;
		}
		else if (a % 5 == 0)
		{
			a /= 5;
		}
		else
		{
			ans = -1;
			break;
		}
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
