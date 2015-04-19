#include <stdio.h>

int main(void)
{
	int n, s, i, x, last, A[11] = {0};
	
	scanf("%d%d", &n, &s);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &x);
		A[x]++;
	}
	for (i = 1; i < 11; i++)
	{
		if (A[i] > 0)
		{
			s -= i * A[i];
			last = i;
		}
	}
	s += last;
	if (s < 0)
		puts("NO");
	else
		puts("YES");
	return 0;
}
