#include <stdio.h>

int main(void)
{
	int i, n, m, P[101] = {0}, L[101] = {0}, ans;

	scanf("%d%d", &n, &m);
	while (m--)
	{
		int a, b, c;
		
		scanf("%d%d%d", &a, &b, &c);
		L[a] += c ;
		P[b] += c;
	}
	ans  = 0;
	for (i = 1; i <= n; ++i)
	{
		int d = P[i] - L[i];
		if (d > 0)
		{
			ans += d;
		}
	}
	printf("%d\n", ans);
	return 0;
}

