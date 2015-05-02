#include <stdio.h>

#define MAX_VAL 1000000007
struct point
{
	int x;
	int y;
};

int _abs(int x)
{
	return x < 0 ? -x : x;
}

int main(void)
{
	int i, v[4], min;
	struct point p[3], q[4];
	
	for (i = 0; i < 3; ++i)
	{
		scanf("%d%d", &p[i].x, &p[i].y);
	}
	for (i = 0; i < 4; ++i)
	{
		q[i].x = q[i].y = 1;
	}
	q[1].y = q[2].y = p[0].y;
	q[2].x = q[3].x = p[0].x;
	
	for (i = 0; i < 4; ++i)
	{
		int a = _abs(q[i].x - p[1].x);
		int b = _abs(q[i].y - p[1].y);
		printf("%d %d\n", a % p[2].x, b % p[2].y);
		if ((a % p[2].x == 0) && (b % p[2].y == 0) && (a/p[2].x == b/p[2].y))
		{
			v[i] = a/p[2].x;
		}
		else
		{
			v[i] = MAX_VAL;
		}
	}
	min = v[0];
	for (i = 1; i < 4; ++i)
	{
		if (min > v[i])
		{
			min = v[i];
		}
	}
	if (min == MAX_VAL)
	{
		puts("Poor Inna and pony!");
	}
	else
	{
		printf("%d\n", min);
	}
	
	return 0;
}
