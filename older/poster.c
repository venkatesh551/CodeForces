#include <stdio.h>

void move(int x, char *s)
{
	while (x-- > 0)
	{
		puts(s);
	}
}

void print_move_left(char *s, int n)
{
	int i;
	
	for (i = n-1; i > 0; i--)
	{
		printf("PRINT %c\nLEFT\n", s[i]);
	}
	printf("PRINT %c\n", s[0]);
}

void print_move_right(char *s, int n)
{
	int i;
	
	for (i = 0; i < n-1; i++)
	{
		printf("PRINT %c\nRIGHT\n", s[i]);
	}
	printf("PRINT %c\n", s[n-1]);
}

int main(void)
{
	int n, k, l, r;
	char s[101];
	
	scanf("%d%d%s", &n, &k, s);
	l = k - 1;
	r = n - k;
	if (l < r)
	{
		move(l, "LEFT");
		print_move_right(s, n);
	}
	else
	{
		move(r, "RIGHT");
		print_move_left(s, n);
	}
	
	return 0;
}
