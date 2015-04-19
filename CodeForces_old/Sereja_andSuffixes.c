#include <stdio.h>
#define MAX_SIZE 100009

static int cnt[MAX_SIZE];
static char F[MAX_SIZE];

int main(void)
{
	int n, m, i;
	int A[MAX_SIZE];
	
	scanf("%d%d", &n, &m);
	for (i = 1; i <=n; i++)
	{		
		scanf("%d", &A[i]);
	}
	for (i = n; i > 0; i--)
	{
		if (F[A[i]] == 0)
		{
			cnt[i] = cnt[i+1] + 1;
			F[A[i]] = 1;
		}
		else
		{
			cnt[i] = cnt[i+1];
		}
	}
	while (m--)
	{
		int x;
		
		scanf("%d", &x);
		printf("%d\n", cnt[x]);
	}
	return 0;
}
