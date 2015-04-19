#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int n, m, i, d[3000], flag = 0;
	
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &d[i]);
	}
	qsort(d, m, sizeof(int), compare);
	if (d[0] == 1 || (m > 0 && d[m-1] == n))
	{
		flag = 1;
	}
	else
	{
		for (i = 2; i < m; i++)
		{
			if (d[i]-2 == d[i-2])
			{
				flag = 1; break;
			}
		}
	}
	if (flag)
		puts("NO");
	else
		puts("YES");
	return 0;
}
