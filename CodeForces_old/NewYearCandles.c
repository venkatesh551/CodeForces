#include <stdio.h>

int main(void)
{
	int a, b, ans, x, y;
	
	scanf("%d%d", &a, &b);
	ans = a;
	do{
		x = a / b;
		y = a % b;
		ans += x;
		a = x + y;
	}while(x > 0);
	printf("%d\n", ans);
	return 0;
}
