#include <stdio.h>
#define MAX_SIZE  100001
int main(void)
{
	int i, A[4];
	char S[MAX_SIZE];
	long long ans;
	
	for (i = 0; i < 4; i++)
		scanf("%d", &A[i]);
	scanf("%s", S);
	ans = 0;
	for (i = 0; S[i] != 0; ++i)
	{
		int ind  = S[i] - '1';
		ans += A[ind];
	}
	printf("%I64d\n", ans);
	return 0;
}
