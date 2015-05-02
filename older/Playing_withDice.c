#include <stdio.h>

int main(void)
{
	int a, b, dist;
	
	scanf("%d%d", &a, &b);
	if (a == b)
	{
		puts("0 6 0");
	}
	else if (a < b)
	{
		dist = b - a - 1;
		printf("%d %d %d\n", a + dist/2, dist&1, 7-b+dist/2);
	}
	else
	{
		dist = a - b - 1;
		printf("%d %d %d\n", 7-a+dist/2, dist&1, b + dist/2 );
	}
	return 0;
}
