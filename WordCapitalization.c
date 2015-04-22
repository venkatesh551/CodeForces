#include <stdio.h>

int main()
{

	char S[1001];
	scanf("%s", S);
	if(S[0] >= 'a' && S[0] <= 'z')
	{	
		S[0] = (S[0] - 'a') + 'A';
	}
	puts(S);
	return 0;
}
