#include <stdio.h>

int get_pos(char *S, char c)
{
	int i;
	
	for (i = 0; S[i] != 0 && c != S[i]; ++i)
		;
	return i;
}

int main(void)
{
	int n, m, i, B[1001] = {0} , temp, flag = 0;
	char A[1001][1001];
		
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; ++i)
	{
		scanf("%s", A[i]);
		temp = get_pos(A[i], 'S') - get_pos(A[i], 'G');
		if (temp > 0)
			B[temp] = 1;
		else
			flag = 1;
	}
	if (flag == 1)
	{
		puts("-1");
	}
	else
	{
		int cnt = 0;
		for (i = 0; i < 1001; ++i)
		{
			cnt += B[i];
		}
		printf("%d\n", cnt);
	}
	return 0;
}
