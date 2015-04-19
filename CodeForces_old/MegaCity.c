#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 1001
#define POPULATION 1e6

struct city
{
	int d;
	int p;
};

int compare (const void *a, const void *b)
{
	const struct city *p = a;
	const struct city *q = b;
	
	if (p->d == q->d)
	{
		return q->p - p->p;
	}
	else
	{
		return p->d - q->d;
	}
}


int main(void)
{
	int n, s, i, sum;
	struct city c[MAX_SIZE];
	
	scanf("%d%d", &n, &s);
	sum = s;
	for (i = 0; i < n; ++i)
	{
		int x, y, k;
		
		scanf("%d%d%d", &x, &y, &k);
		c[i].d = x * x + y * y;
		c[i].p = k;
		sum += k;
	}
	if (sum < POPULATION)
	{
		puts("-1");
	}
	else
	{
		qsort(c, n, sizeof(struct city), compare);
		sum = s;
		for (i = 0; i < n && sum < POPULATION; ++i)
		{
			sum += c[i].p;
		}
		printf("%lf\n", sqrt(c[i-1].d));
	}
	
	return 0;
}
