#include <stdio.h>

int main()
{

	char str[101], output[101], count[4] = {0};
	int i, j, k;

	scanf("%s", str);
	for(i = 0; str[i]; i++)
	{
		if(str[i] != '+')
		{
			int x = str[i] - '0';
			count[x]++;
		}

	}
	k = 0;
	for(i = 1; i < 4; i++)
	{
		for(j = 0; j < count[i]; j++)
		{
			output[k++] = i + '0';
			output[k++] = '+';
		}		
	}
	output[k-1] = 0;
	puts(output);
	return 0;
}
