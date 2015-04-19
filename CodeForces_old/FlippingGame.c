#include <stdio.h>

int main()
{

	int n, i, A[101], B[101], S;
	int max_sofar, max_end_here;

	scanf("%d", &n);
	S = 0 ;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
		S += A[i];
		if(A[i] == 0)
			B[i] = 1;
		else
			B[i] = -1;
	}
 	max_sofar = max_end_here = 0;
	for(i = 0; i < n; i++)
	{
		max_end_here += B[i];
		if(max_end_here < 0)
			max_end_here = 0;
		if(max_sofar < max_end_here)
			max_sofar = max_end_here;
	}
	if(max_sofar == 0)
		max_sofar = -1;
	printf("%d\n",S + max_sofar );
	return 0;
}
