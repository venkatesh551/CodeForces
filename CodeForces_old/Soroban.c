#include <stdio.h>

int main()
{
	unsigned n;
	char *start[] = {"O-|", "-O|"};
	char *S[] = {"-OOOO","O-OOO","OO-OO","OOO-O","OOOO-"};
	
	scanf("%u", &n);
	
	do 
	{
		unsigned d = n%10;
		n/= 10;
		printf("%s%s\n", start[d>=5], S[d%5]);
	} while(n > 0);	
	return 0;
}
