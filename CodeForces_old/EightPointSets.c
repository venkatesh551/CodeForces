#include <stdio.h>

struct point{
		int x;
		int y;
};

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{

	struct point p[8];
	int x[9], y[9], a[8], b[8];
	int i, j, k ;
	for( i = 0; i < 8; i++)
	{
		scanf("%d%d", &p[i].x, &p[i].y);
		x[i] = p[i].x;
		y[i] = p[i].y;
	}
	qsort( x, 8, sizeof(int), compare);
	qsort( y, 8, sizeof(int), compare);
	a[0] = x[0];
	b[0] = y[0];
	for(i = 1, j = k= 0; i < 8 ; i++)
	{
		if(x[i] != a[j])
			a[++j] = x[i];
		if(y[i] != b[k])
			b[++k] = y[i];
	}
	
	
	if(j == 2 && k == 2)
	{
		for(i = 0; i < 2 && a[i] < a[i+1] && b[i] < b[i+1] ;i++)
				;
		if(i == 2)
		{
			for(i=0 ; i < 8; i++)
			{
				if(p[i].x == a[1] && p[i].y == b[1])
					break;
			}
			if(i == 8)
			{
				puts("respectable");
			}
			else
			{
				puts("ugly");	
			}		
		}
		else
		{
			puts("ugly");
		}

	}
	else
	{
		puts("ugly");
	}
	return 0;
}
