#include <stdio.h>

#define MAX_SIZE 1001
void count(char *s, int *map)
{
	int i;
	
	for (i = 0; s[i] ; ++i)
	{
		int x = s[i];
		
		map[x]++;
	}
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int get_maxArea(char *s, char *t)
{
	int ans  = 0;
	int i, a[128] = {0}, b[128] = {0};
	
	count(s, a);
	count(t, b);
	for (i = 'a'; i <= 'z'; ++i)
	{
		if (a[i] == 0 && b[i] > 0)
		{
			return -1;
		}
		else
		{
			ans += min(a[i], b[i]);
		}
	}
	return ans;
}

int main(void)
{
	char s[MAX_SIZE], t[MAX_SIZE];
		
	scanf("%s%s", s, t);
	printf("%d\n", get_maxArea(s, t));
	return 0;
}
