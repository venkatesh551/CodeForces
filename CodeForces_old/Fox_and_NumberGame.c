#include <stdio.h>

int gcd (int a, int b)
{
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void)
{
	int n, i, ans;
	
	scanf("%d%d", &n, &ans);
	for (i = 1; i < n; ++i)	
	{
		int x;
		
		scanf("%d", &x);
		ans = gcd(ans, x);
	}
	printf("%d\n", ans * n);
	return 0;
}
