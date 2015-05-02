#include <stdio.h>

int main(void)
{
	char S[105];
	int i, ans, map[128] = {0};
		
	scanf("%s", S);
	for (i = 0; S[i]; i++)
	{
		int x = S[i];
		map[x]++;
	}
	ans = 0;

	while (map['i'] > 0 && map['t'] > 0 && map['e'] > 2 && map['n'] > 2)
	{
		ans++;
		map['i']--;
		map['t']--;
		map['e'] -= 3;
		map['n'] -= 2;
	}

	printf("%d\n", ans);
	return 0;
}
