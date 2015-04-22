#include <stdio.h>

#define MAX_SIZE 101
static char brd[MAX_SIZE][MAX_SIZE];
static int n, count[MAX_SIZE][MAX_SIZE];

int is_overlap()
{
	int i, j;
	
	for (i = 1; i < n-1; ++i)
	{
		for (j = 1; j < n-1; ++j)
		{
			if (brd[i][j] == '#' &&
				brd[i-1][j] == '#' &&
				brd[i][j+1] == '#' &&
				brd[i+1][j] == '#' &&
				brd[i][j-1] == '#')
			{
				count[i][j]++;
				count[i-1][j]++;
				count[i][j+1]++;
				count[i+1][j]++;
				count[i][j-1]++;
			}
		}
	}
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("%d ",count[i][j]);
		}
		printf("\n");	
	}
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (brd[i][j] == '#' && count[i][j] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main(void)
{
	int i;
		
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", brd[i]);
	}
	if (is_overlap())
	{
		puts("NO");
	}
	else
	{
		puts("YES");
	}
	
	return 0;
}
