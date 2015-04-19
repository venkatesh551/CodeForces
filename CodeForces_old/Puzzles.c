#include <stdio.h>

#define RANGE 1000
void countSort(int *a, int len, int *b)
{
	int count[RANGE+1] = {0}, i;
	
	for(i = 0; i < len; i++)
	{
		count[a[i]]++;
	}
	for(i = 1; i <= RANGE; i++)
		count[i] += count[i-1];

	for(i = 0; i < len ; i++)
	{
		b[count[a[i]] - 1] = a[i];
		count[a[i]]--;
	}

}

int main()
{


	int n, m, a[51], b[51];
	int i, j, ans;

	scanf("%d%d", &n, &m);
	for(i = 0; i < m ;i++)
		scanf("%d", &a[i]);
	countSort(a, m, b);
	ans = 1001;
	for(i = 0, j = n - 1; i < m-n+1 ; i++, j++)
	{
		int diff = b[j] - b[i];
		if(diff < ans)
			ans = diff;
	}
	printf("%d\n", ans);

	return 0;
}
