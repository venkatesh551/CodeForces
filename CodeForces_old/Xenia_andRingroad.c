#include <stdio.h>

int main()
{
	int n, m, i, cur;
	long long ans;

	scanf("%d%d", &n, &m);
	cur = 1;
	ans = 0;
	for(i = 0; i < m ; i++)
	{
		int dest, distance;
		scanf("%d", &dest);
		distance  = dest - cur;
		if(distance < 0)
		{
			distance += n;
		}
		cur = dest;
		ans += distance;
	}
	printf("%I64d\n",ans);
	return 0;
}
