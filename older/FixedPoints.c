#include <stdio.h>

int main()
{

	int A[100000], N, i;
	int count, flag, ans;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	count = flag = 0;
	for(i = 0; i < N; i++)
	{
		if(i == A[i])
		{
			count++;
		}
		else if(A[A[i]] == i)
		{
			flag = 1;
		}
	}
	if(count == N)	
	{
		ans = N;
	}
	else if(flag == 1)
	{
		ans = count + 2;
	}
	else
	{
		ans = count + 1;
	}
	printf("%d\n", ans);
	return 0;
}
