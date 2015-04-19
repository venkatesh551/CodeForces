#include <stdio.h>

int main()
{

	char name[101], ascii[128] = {0}, i, sum = 0;
	scanf("%s", name);
	for(i = 0; name[i]; i++)
		ascii[name[i]] = 1;
	for(i = 'a';i <= 'z'; i++)
		sum += ascii[i];
	if(sum % 2 == 0)
		puts("CHAT WITH HER!");
	else
		puts("IGNORE HIM!");
	return 0;
}
