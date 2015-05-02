#include <stdio.h>

int main()
{

	int n, k, i;

	scanf("%d%d", &n, &k);
	if(k == 0)
	{
		for(i = 1; i <=n ; i++)
			printf("%d ", i);
	}
	else
	{
		for(i = n; i >= n-k+1; i--)
			printf("%d ", i);
		for(i = 1; i <= n-k; i++)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
