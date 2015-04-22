# include <stdio.h>

void swap (int *x, int *y)
{
    int  temp = *x;
    *x = *y;
    *y = temp;
}
  

int permute(int *a, int i, int n)
{
	int j, ans = 0;
	if (i == n)
	{
		return find_sum()
	}
	else
	{
		for (j = i; j <= n; j++)
		{
			swap((a+i), (a+j));
			ans = max(ans, permute(a, i+1, n));
			swap((a+i), (a+j)); //backtrack
		}
		return ans;
	}
} 
