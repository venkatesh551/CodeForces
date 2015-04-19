#include <stdio.h>

int main()
{
	int n, h, m, ans, max;
	int prevH, prevM ;

	scanf("%d", &n);
	prevH = prevM = -1;
	ans = max = 1;
	while(n--)
	{
		scanf("%d%d", &h, &m);
		if(h == prevH && m == prevM)
		{
			ans++;
		}
		else
		{
			ans = 1;
			prevH = h;
			prevM = m;
		}
		if(ans > max)
		{
			max = ans;
		}
	}	
	printf("%d\n",max);
	return 0;
}
