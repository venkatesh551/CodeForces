#include <stdio.h>

int main()
{

	int a, b, c;
	int x, y, z, sum;

	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;

	if((sum & 1) == 1 )
	{
		puts("Impossible");
		return 0;
	}
	y = (a - b + c) / 2;
	x = a - y;
	z = c - y;
	if(x < 0 || y < 0 || z < 0)
	{
		puts("Impossible");
	}
	else
	{
		printf("%d %d %d\n",x, z, y);
	}
	return 0;
}
