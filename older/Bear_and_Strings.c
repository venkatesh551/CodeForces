#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[5001];
	int i, ans, last, len;
	
	scanf("%s", s);
	ans = last = 0;
	len = strlen(s);
	for (i = 0; i+3 < len; ++i)
	{
		if (strncmp(s+i, "bear", 4) == 0)
		{
			ans += (1 + i - last) * (len-i-3);
			last = i + 1;
		}
	}
	printf("%d\n", ans);
	return 0;
}
