#include <stdio.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		char S[15];
		int A[6] = {1, 2, 3, 4, 6, 12};
		int B[6] = {12, 6, 4, 3, 2, 1};
		int ans[6] = {0};
		int i, j, k, temp;
		
		scanf("%s", S);
		for (i = 0; i < 6; i++)
		{
			for (j = 0; j < B[i]; j++)
			{
				int cnt = 0;
				
				for (k = 0; k < A[i]; k++)
				{
					int index = k * B[i] + j;
					
					if (S[index] == 'X')
					{
						cnt++;
					}
				}
				if (cnt == A[i])
				{
					ans[i] = 1;
					break;
				}
			}
		}
		temp = 0;
		for (i = 0; i < 6; i++)
			temp += ans[i];
		printf("%d", temp);
		if (temp > 0)
		{
			for (i = 0; i < 6; ++i)
			{
				if (ans[i])
				{
					printf(" %dx%d", A[i], B[i]);
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
