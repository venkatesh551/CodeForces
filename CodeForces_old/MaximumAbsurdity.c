#include <stdio.h>

int main()
{

	unsigned N, K, len, idx1, idx2, ans;
	unsigned A[200001], B[200001], i, j ;

	scanf("%u%u",&N, &K);
	for(i = 0; i < N; i++)
		scanf("%u",&A[i]);
	len = N-K+1 ;
	for(i = 0; i < len; i++)
	{	
		int sum = 0;
		for(j = 0; j < K; j++)
			sum += A[i+j];
		B[i] = sum;
	}
	ans = idx1 = idx2 = 0;

	for(i = 0; i < len; i++)
	{
		for(j = i+K; j < len ; j++)
		{
			int s = B[i] + B[j];
			if(s > ans)
			{
				ans = s;
				idx1 = i;
				idx2 = j;
			}
		}
	}
	printf("%u %u\n", idx1+1, idx2+1);
	return 0;
}
