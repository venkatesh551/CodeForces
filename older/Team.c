#include <stdio.h>

void print_str(const char *s, int x)
{
	int i;
	
	for (i = 0; i < x; ++i)
	{
		printf("%s", s);
	}
}

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (a < b)
	{
		if (b <= 2 * (a + 1))
		{
			int x = b - a;
			if (x  < a)
			{
				print_str("110", x);	
				print_str("10", 2 *a - b);
			}
			else
			{
				print_str("110", a);
				print_str("1", b - 2*a);
			}
		}
		else
		{
			printf("-1");
		}
	}
	else if (a > b)
	{
		if (a == b+1)
		{
			print_str("01", b);
			printf("0");
		}
		else
		{
			printf("-1");
		}
	}
	else
	{
		print_str("01", a);
	}
	printf("\n");
	return 0;
}
