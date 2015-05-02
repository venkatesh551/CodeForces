#include <stdio.h>

#define MAX_SIZE 100007
static char S[MAX_SIZE];
static int cnt[MAX_SIZE];
int main(void)
{
	int n, k, w, i;

	scanf("%d%d%d%s", &n, &k, &w, S);
	for (i = 0; i < n; ++i)
	{
		cnt[i+1] = cnt[i] + (S[i] == '1');
	}
	while (w--)
	{
		int l, r, ans;
		
		scanf("%d%d", &l, &r);
		ans = cnt[r] - cnt[l-1];
		for (i = l + k -1; i <= r ; i += k)
		{
			if (S[i-1] == '1')
			{
				ans--;
			}
			else
			{
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
