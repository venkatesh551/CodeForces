#include <stdio.h>

int abs(int n) 
{ 
	return n > 0 ? n : -n; 
}

int main()
{

	int x, y, val;
	
	scanf("%d%d", &x, &y);
	val = abs(x) + abs(y);
	if(x > 0 && y > 0)
	{
		printf("%d %d %d %d\n", 0, val, val, 0);
	}
	else if(y > 0)
	{
		printf("%d %d %d %d\n", -val, 0, 0, val);
	}
	else if(x > 0)
	{
		printf("%d %d %d %d\n", 0, -val, val, 0);
	}
	else
	{
		printf("%d %d %d %d\n", -val, 0, 0, -val);
	}
	return 0;
}
