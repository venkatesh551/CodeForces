#include <stdio.h>

int main(void)
{
	int i,j, n, m, a[3001], b[3001];
	
	scanf("%d%d", &n,&m);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < m; ++i)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0, j = 0; i < n && j < m; j++)
	{
		if (a[i] <= b[j])
		{
			i++;
		}
	}
	printf("%d\n", n-i);
	return 0;
}
