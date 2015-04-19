#include <stdio.h>

int main()
{

	int n ;
	int i, j, start, end ;

	scanf("%d", &n);
	start = 1;
	end = n * n;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n/2; j++)
		{
			printf("%d ",start);
			start++;
		}
		for(j = 0; j < n/2; j++)
		{
			printf("%d ",end);
			end--;
		}
		printf("\n");
	}

	return 0;
}
