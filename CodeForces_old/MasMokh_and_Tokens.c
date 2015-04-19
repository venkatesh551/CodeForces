#include <stdio.h>

long long gcd(long long a, long long b)
{
	while (b > 0)
	{
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void)
{
	int i, n, a, b, v;
	long long x, y;
	
	scanf("%d%d%d", &n, &a, &b);
	x = (long long)a % b;
	y = b / gcd(a, b);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v);
		if (x == 0)
		{
			printf("0 ");
		}
		else
		{
			printf("%I64d ", v%y);
		}
	}
	printf("\n");
	return 0;
}
