#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return  ( *(int*)b  - *(int*)a );
}

int main(void)
{
	int n, a[500000], i, j, x, ans;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{		
		scanf("%d", &a[i]);
	}
	qsort (a, n, sizeof(int), compare);
	ans = n;
	i = 0;
	j = x = n/2;
	while (i < x && j < n)
	{
		if (a[i] >= 2 * a[j])
		{
			++i;
			ans--;
		}
		++j;
	}
	printf("%d\n", ans);
	return 0;
}
