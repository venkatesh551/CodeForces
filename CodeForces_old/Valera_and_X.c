#include <stdio.h>

int is_cross(char s[][301], int n)
{
	int i, j;
	char x, y;
	
	x = s[0][0];
	y = s[0][1];
	if (x == y)
	{
		return 0;
	}
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (i == j || i + j == n-1)
			{
				if (s[i][j] != x)
				{
					return 0;
				}	
			}
			else
			{
				if (s[i][j] != y)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int main(void)
{
	
	int n, i;
	char s[301][301];
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%s", s[i]);
	if (is_cross(s, n))
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}	
	return 0;
}
