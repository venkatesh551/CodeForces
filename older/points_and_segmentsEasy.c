#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101
struct seg
{
	int x;
	int y;
};

int absVal(int x)
{
	return x < 0 ? -x : x; 
}
int cmp(const void * a, const void * b)
{
	const struct seg *p = a;
	const struct seg *q = b;
	
	if (p->x == q->x)
	{
		return p->y - q->y;
	}
	else
	{
		return p->x - q->x;
	}
}

int get_result(int *p, int n, struct seg *s, int m, int *colors)
{
	int i, j;
	
	for (i = 0; i < n; i++)
		colors[i] = -1;
	for (i = 0; i < m; i++)
	{
		int c = 0, r = 0, b = 0;
		
		for (j = 0; j < n; j++)
		{
			if (p[j] <= s[i].y && p[j] >= s[i].x)
			{
				if (colors[j] == -1)
				{
					colors[j] = c;
					c = 1-c;
				}
				else
				{
					c = 1 - colors[j];
				}
				if (colors[j] == 0)
				{
					b++;
				}
				else
				{
					r++;
				}
			}
		}
		if (absVal(r-b) > 1)
			return 1;
	}
	return 0;//success
}
	

int main(void)
{
	int i, n, m, p[MAX_SIZE], colors[MAX_SIZE], result;
	struct seg s[MAX_SIZE];

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &s[i].x, &s[i].y);
	}
	qsort(s, m, sizeof(struct seg), cmp);
	result = get_result(p, n, s, m, colors);
	if (result == 1) //fail
	{
		printf("-1");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (colors[i] == -1)
				printf("0 ");
			else
				printf("%d ", colors[i]);
		}
	}
	printf("\n");
	return 0;
}
