#include <stdio.h>

int main()
{

	int N, i, A[100000], flag;
	int cnt_25, cnt_50;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	cnt_25 = cnt_50 = 0;
	flag = 0;
	for(i = 0; i < N; i++)
	{
		if(A[i] == 25)
		{
			cnt_25++;
		}
		else if(A[i] == 50)
		{
			if(cnt_25 > 0)
			{
				--cnt_25;
				++cnt_50;
			}
			else
			{
				flag = 1; i = N;
			}
		}
		else
		{
			if(cnt_25 > 0 && cnt_50 > 0)
			{
				--cnt_25;
				--cnt_50;
			}
			else if(cnt_25 >= 3)
			{
				cnt_25 -= 3;
			}
			else
			{
				flag = 1; i = N;
			}
		}
	}
	flag == 0 ? puts("YES"):puts("NO");
	return 0;
}
