#include <stdio.h>


int main()
{

	int n, m, A[100001], i;
	long long add;

	scanf("%d%d", &n,&m);
	for(i = 1; i <= n; i++)
		scanf("%d", &A[i]);
	add = 0;
	for(i = 0; i < m ; i++)
	{
		int t, v, x ;
		scanf("%d", &t);
		switch(t)
		{
			case 1: scanf("%d%d", &v, &x);
					A[v] = x - add;
					break;
			case 2: scanf("%d", &x);
					add += x ;
					break;
			case 3: scanf("%d", &v);
					printf("%I64d\n", A[v]+ add);
					break;
			
		}
	}

	return 0;
}
