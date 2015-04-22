#include <stdio.h>

int main()
{
	
	int n, A[1001] = { 0 }, i, x, d;

	scanf("%d", &n);

	for( i = 0 ; i < n; i++)
	{
		scanf("%d", &x);
		A[x]++;
	}
	d = 0;
	for( i= 1; i < 1001; i++)
	{
		if(d > A[i])
			d -= A[i];
		else
			d = A[i] - d;
	}
	if(d > 1)
		puts("NO");
	else
		puts("YES");


	return 0;
}
