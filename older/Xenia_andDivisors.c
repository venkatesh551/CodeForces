#include <stdio.h>

void printAns(int *A,  int j, int k)
{
	while(A[j] && A[k])
	{
		printf("1 %d %d\n",  j, k);
		A[j]--;
		A[k]--;
	}
}

int main()
{

	int A[8] = {0};

	int N, i, noOfGroups;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		int x;
		scanf("%d", &x);
		A[x]++;
	}
	noOfGroups = N/3;
	if((A[1] == noOfGroups) &&
	  ( A[2]+A[3] == noOfGroups) &&
	  ( A[4]+A[6] == noOfGroups) &&
	  ( A[3] <= A[6]))
	{
		printAns(A, 2,4);
		printAns(A, 2,6);
		printAns(A, 3,6);
	}
	else
	{
		puts("-1");
	}

	return 0;
}
