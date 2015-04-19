#include <stdio.h>

int min(int x, int y)
{
	return x < y ? x : y;
}

int main(void)
{
	int n, k, ans = 0, A[101], i, x;
	
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
	}
	
	for (i = 0; i < k; ++i)
	{
		int j, x = 0, y = 0;	
		
		for (j = i; j < n; j += k)
		{
			if (A[j] == 1)
			{
				x++;
			}
			else
			{
				y++;
			}
		}
		ans += min(x, y);
	}
	printf("%d\n", ans);
	return 0;
}
