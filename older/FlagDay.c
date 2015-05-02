#include <stdio.h>
#include <string.h>
int main()
{

	int n, m, i;
	int color[100001];

	scanf("%d%d",&n,&m);
	memset(color, -1, sizeof(color));
	for (i = 0; i < m; i++)
	{
		int a, b, c;

		scanf("%d%d%d",&a,&b,&c);
		if (color[a] == -1 && color[b] == -1 && color[c] == -1)
		{
			color[a] = 0, color[b] = 1, color[c] = 2;
		}
		else if(color[a] != -1)
		{
			color[b] = (color[a] + 1 ) % 3;
			color[c] = (color[b] + 1 ) % 3;
		}
		else if(color[b] != -1)
		{
			color[a] = (color[b] + 1 ) % 3;
			color[c] = (color[a] + 1 ) % 3;
		}
		else
		{
			color[a] = (color[c] + 1 ) % 3;
			color[b] = (color[a] + 1 ) % 3;
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", color[i]+1);
	}
	printf("\n");
	return 0;
}
