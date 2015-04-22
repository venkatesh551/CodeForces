#include <stdio.h>

int main()
{

	int n, i, prev;
	unsigned noOfGroups;
	char str[3];

	scanf("%d%s", &n, str);
	prev = str[1];
	noOfGroups = 1;
	printf("%u\n", prev);
	for(i = 1; i < n; i++)
	{
		int cur;

		scanf("%s", str);
		cur = str[0];
		if(cur == prev)
		{
			noOfGroups++;
		}
		prev = str[1];
	}
	printf("%u\n", noOfGroups);
	return 0;
}
