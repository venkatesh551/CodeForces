#include <stdio.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
};
struct point p[100001];

int compare_x(const void * a, const void * b)
{
	return ((struct point*)a)->x - ((struct point*)b)->x;
}

int compare_y(const void * a, const void * b)
{
	return ((struct point*)a)->y - ((struct point*)b)->y;
}

int min(int x, int y)
{
	return x < y ? x : y;
}

int main(void)
{
	int n, i, a, b;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &p[i].x, &p[i].y);
	}
	qsort(p, n, sizeof(struct point), compare_x);
	a = 1;
	for (i = 1; i < n; ++i)
	{
		if (p[i].x > p[i-1].x)
		{
			a++;
		}
	}
	qsort(p, n, sizeof(struct point), compare_y);
	b = 1;
	for (i = 1; i < n; ++i)
	{
		if (p[i].y > p[i-1].y)
		{
			b++;
		}
	}
	printf("%d\n", min(a, b));
	return 0;
}
