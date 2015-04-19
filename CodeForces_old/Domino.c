#include <stdio.h>

struct domino
{
	int u;
	int l;
};

int main()
{

	int n, i;
	struct domino d[100];
	int upper_sum, lower_sum, ans;

	scanf("%d", &n);
	upper_sum = lower_sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &d[i].u, &d[i].l);
		upper_sum += d[i].u;
		lower_sum += d[i].l;
	}
	if ((upper_sum & 1) != (lower_sum & 1))	
	{
		ans = -1;
	}
	else if (!(upper_sum & 1) && !(lower_sum & 1))
	{
		ans = 0;
	}
	else
	{
		for (i = 0; i < n && (d[i].u & 1) == (d[i].l & 1)); i++)
					;
		if (i == n)
		{
			ans = -1;
		}
		else
		{
			ans = 1;
		}
	}
	printf("%d\n", ans);
	return 0;
}
