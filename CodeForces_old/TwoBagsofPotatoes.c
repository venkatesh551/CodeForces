#include <stdio.h>

int main()
{

	int y, k, n, i;

	scanf("%d%d%d", &y, &k, &n);
	for(i = y/k + 1; k * i <= n; i++)
	{
		printf("%d ", k * i - y);
	}
	if(i == y/k + 1)
		puts("-1");
	else
		printf("\n");

	return 0;
}
