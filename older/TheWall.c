#include <stdio.h>
unsigned gcd(unsigned a, unsigned b)
{

	while(b)
	{
		unsigned r = a % b;
		a = b;
		b = r;

	}
	return a;

}


int main()
{

	unsigned x, y, a, b;
	unsigned ans, lcm;

	scanf("%u%u%u%u", &x, &y, &a, &b); 
	lcm = (x * y) / gcd(x, y);
	ans =  b/lcm - (a -1)/lcm;
	printf("%u\n", ans);
	return 0;
}
