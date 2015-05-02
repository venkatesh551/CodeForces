#include <stdio.h>

int count(char *s, int c)
{
	int i, cnt = 0;
	
	for (i = 0; s[i] != 0; ++i)
	{
		if (s[i] == c)
		{
			cnt++;
		}
	}
	return cnt;
}

void change(char *s, int letter, int cnt)
{
	int i;
	
	for (i = 0; s[i] && cnt > 0; i++)
	{
		if (s[i] == letter)
		{
			if (letter == 'X')
			{
				s[i] = 'x';
			}
			else
			{
				s[i] = 'X';
			}
			cnt--;
		}
	}
}

int main(void)
{
	int n, p, q, c;
	char S[201];
	
	scanf("%d%s", &n, S);
	p = count(S, 'x');
	q = n - p;
	if (p == q)
	{
		c = 0;
	}
	else if (p < q)
	{
		c = q - n/2;
		change(S, 'X', c);
	}
	else
	{
		c = p - n/2;
		change(S, 'x', c);
	}
	printf("%d\n%s\n", c, S);
	return 0;
}


