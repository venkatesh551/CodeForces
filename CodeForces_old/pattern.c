#include <stdio.h>
#include <string.h>

#define MAX_N 100001

int main(void)
{
	int i, n, m, j;
	char S[MAX_N], ans[MAX_N];
	
	scanf("%d%s", &n, S);
	m = strlen(S[0]);
	strcpy(ans, S);
	for (j = 1; j < n; ++j)
	{
		scanf("%s", S);
		
		for (i = 0; i < m; ++i)
		{
			if (S[i] == '?' S[i] == ans[i])
			{
				ans[i] = 'a';
			}
		}
	}
	return 0;
}
