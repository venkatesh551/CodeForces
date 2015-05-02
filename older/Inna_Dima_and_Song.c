#include <stdio.h>
#define MAX_SIZE 100001
static int A[MAX_SIZE], B[MAX_SIZE];

void read(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
}

int main(void)
{
	int i, n;
	long long ans;
	
	scanf("%d", &n);
	read(A, n);
	read(B, n);
	ans  = 0;
	for (i = 0; i < n; ++i)
	{
		int x = (B[i]+1)/2;
		
		if (B[i] == 1 || x > A[i])
		{
			ans--;
		}
		else
		{
			ans += (B[i] - x) * (long long)x;
		}
	}
	printf("%I64d\n", ans);
	
	return 0;
}
