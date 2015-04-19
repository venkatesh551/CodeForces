#include <stdio.h>

int main(void)
{
	int n, i, cnt, ans;
	char s[3001], prev;
	
	scanf("%d%s", &n, s);
	cnt = ans = 0;
	prev = 'L';
	for (i = 0; s[i] != 0; ++i)
	{
		if (s[i] == '.')
		{
			cnt++;
		}
		else if (s[i] == 'L')
		{
			if (prev == 'R')
			{
				ans += (cnt & 1);
			}
			cnt = 0;
			prev = 'L';
		}
		else
		{
			if (prev == 'L')
			{
				ans += cnt;
			}
			prev = 'R';
			cnt = 0;
		}
	}
	if (prev == 'L')
	{
		ans += cnt;
	}
	printf("%d\n", ans);
	
	return 0;
}
