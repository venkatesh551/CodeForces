#include <stdio.h>

#define MAX_SIZE 100001
static int A[MAX_SIZE], B[MAX_SIZE];
static char f[MAX_SIZE], s[MAX_SIZE];
int main(void)
{
	int n, i, j, k, len;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)	
	{
		scanf("%d%d",&A[i], &B[i]);
		f[i] = s[i] = '0';
	}
	for (i = 0; i < n/2; ++i)
	{
		f[i] = s[i] = '1';
	}
	i = j = len = 0;
	while (len < n)
	{
		len++;
		if(A[i] < B[j])
		{
			++i;
		}
		else
		{
			++j;
		}
	}
	for (k = n/2; k < i; ++k)
	{
		f[k] = '1';
	}
	for (k = n/2; k < j; ++k)
	{
		s[k] = '1';
	}
	puts(f);
	puts(s);
	return 0;
}
