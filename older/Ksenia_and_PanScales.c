#include <stdio.h>
#include <string.h>
static char p[10001], q[10001];

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main(void)
{
	int i, left, right, x, y, z, n, c;
	char *temp;
	
	scanf("%s%s", p, q);
	for (i = 0; p[i] != '|'; i++)
		;
	left = i;
	p[i] = 0;
	temp = &p[i+1];
	right = strlen(temp);
	x = y = strlen(q);
	z = abs(left - right);
	x -= z;
	if (x < 0 || x % 2 != 0)
	{
		puts("Impossible");
		return 0;
	}
	if (left < right)
	{
		n = z + x/2;
		c = q[n];
	}
	else if (left == right)
	{
		n = y/2;
		c = q[n];
	}
	else
	{
		n = y - (z + x/2);
		c = q[n];
	}
	q[n] = 0;
	printf("%s%s|", p, q);		
	q[n] = c;
	printf("%s%s\n", temp, q+n);
	return 0;
}
