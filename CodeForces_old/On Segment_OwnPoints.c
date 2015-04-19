#include <stdio.h>

int main(void)
{
	int n, x, y, A[101] = {0}, ans = 0, i;
	
	scanf("%d%d%d", &n, &x, &y);
	for (i = 1; i < n; ++i)
	{
		int l, r, m, j;
		
		scanf("%d%d", &l, &r);
		m = r < y ? r : y;
		for (j = l+1; j <m; j++)
		{
			A[j] = 1;
		}
	}
	if (n == 1)
	{
		ans = y - x;
	}
	else
	{
		int cnt = 0;
		for (i = x; i<=y; ++i)
		{
			if (A[i] == 0)
			{
				cnt++;
			}
			else
			{
				if (cnt > 0)
					ans += cnt - 1;
				cnt = 0;
			}
		}
		if (cnt > 0)
			ans += cnt - 1;	
	}
	printf("%d\n", ans);
	return 0;
}
