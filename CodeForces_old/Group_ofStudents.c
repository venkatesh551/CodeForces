#include <stdio.h>

int main()
{

	int m, x, y, c[101], sum, i;

	scanf("%d", &m);
	sum = 0;
	for (i = 0; i < m; i++)
	{
		int temp;
		scanf("%d",&temp);
		sum += temp;
		c[i] = sum;
	}
	scanf("%d%d", &x,&y);
	for (i = 0; i < m-1; i++)
	{
		int temp = sum - c[i];

		if (temp >= x && temp <= y && c[i] >= x && c[i] <= y)
		{
			printf("%d\n",i+2);
			return 0;
		}
	}
	printf("0\n");

	return 0;
}
