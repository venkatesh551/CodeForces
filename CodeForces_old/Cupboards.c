#include <stdio.h>
int main()
{

	int n, lsum, rsum, min;

	scanf("%d", &n);
	lsum = rsum = 0;
	while(n--)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		lsum += (x == 0);
		rsum += (y == );
	}
	min = lsum < rsum ? lsum : rsum;
	printf("%d\n", min);

	return 0;
}
