#include <stdio.h>

int main(){

	int n, max, min, ans, i, t;

	scanf("%d%d", &n, &t);
	min = max = t;
	ans = 0;
	for(i = 1; i < n; i++)
	{
		scanf("%d", &t);
		if(min > t)
		{
			ans++;
			min = t;
		}
		if(max < t)
		{
			max = t;
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
