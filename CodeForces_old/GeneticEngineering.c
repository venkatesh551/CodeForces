#include <stdio.h>

int main(void)
{
	char S[101];
	int ans, cnt, i;
	
	scanf("%s", S);
	ans = 0;
	cnt = 1;
	for (i = 1; S[i] != 0; ++i)
	{
		if (S[i] == S[i-1])
		{
			cnt++;
		}
		else
		{
			if ((cnt & 1) == 0)
			{
				ans++;
			}
			cnt = 1;
		}
	}
	if ((cnt & 1) == 0)
	{
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
