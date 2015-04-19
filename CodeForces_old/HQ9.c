#include <stdio.h>

int main()
{

	char p[101];
	int i;

	scanf("%s", p);
	for(i = 0; p[i] != 0 ; i++)
	{
		 if( p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
			break;
	}
	if(p[i] != 0)
		puts("YES");
	else
		puts("NO");

	return 0;
}
