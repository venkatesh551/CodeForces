#include <stdio.h>

int main()
{

	int k, a[100002], b[100002];
	int i;
	long long int ans ;
	long long int n, m; 

	scanf("%I64d", &n);
	for(i = 1; i <= n; i++)
	{	
		scanf("%d", &a[i]);	
		b[a[i]] = i;
	}
	scanf("%I64d", &m);
	ans = 0;
	for(i = 0; i < m; i++)
	{
		scanf("%d", &k);
		ans += b[k];
	}
	printf("%I64d %I64d\n",ans, m *(n + 1) - ans);
	return 0;
}
