#include <stdio.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{

	int i, s[4], ans;

	for(i = 0; i < 4; i++)
		scanf("%d", &s[i]);
	qsort(s, 4, sizeof(int), compare);
	ans = 0;
	for(i = 0; i < 3; i++)
	{
		if(s[i] == s[i+1])	
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
