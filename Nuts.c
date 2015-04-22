#include <stdio.h>

int main(void)
{
	int k, a, b, v, ans, s;
	float x = 5.2;
	scanf("%d%d%d%d", &k, &a, &b, &v);
	s = (a + v - 1) / v;
	printf("---%d---\n", x== 5.2);
	ans = 0;
	while (s > 0)	
	{
		ans++;
		if (b > 0)
		{
			if (b < k)
			{
				s -= (b + 1);
				b = 0;
			}
			else
			{
				b -= (k-1);
				s -= k;
			}
		}
		else
		{
			s--;
		}
	}
	printf("%d\n", ans);
	return 0;
}
