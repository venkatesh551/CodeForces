#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{

	int N, A[100] c, i, diff;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	qsort(A, N, sizeof(int), compare);

	diff = A[1] - A[0];
	if(diff == A[0])
	{
		int flag = 0;
		for(i = 2; i < N; i++)	
		{
			int d = A[i] - A[i-1];
			
			if(d != diff)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			puts("Bob");
			return 0;
		}	
	}
	c = A[N-1] - N;

	if((c & 1) == 1)
	{
		puts("Alice");
	}
	else
	{
		puts("Bob");
	}
	
	return 0;
}
