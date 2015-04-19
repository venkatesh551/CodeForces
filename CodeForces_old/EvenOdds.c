#include <stdio.h>

int main()
{

	long long int n, k;
	long long int noOfOdds, noOfEvens ;
	long long int ans;

	scanf("%I64d%I64d", &n, &k);

	noOfOdds = noOfEvens = n/2;
	if(n % 2 != 0)
	{
		noOfOdds++;
	}
	if(k <= noOfOdds)
	{
		ans = 2 * k - 1;
	}
	else
	{
		ans = 2 * (k - noOfOdds);
	}
	printf("%I64d\n", ans);
	return 0;
}
