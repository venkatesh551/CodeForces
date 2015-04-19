#include <stdio.h>

int main(void)
{
	int n, B, P, cnt = 0;
	
	scanf("%d%d%d", &n, &B, &P);
	while (n--)
	{
		int v;
		
		scanf("%d", &v);
		if (v == 1)	
		{
			if (B > 0)
			{
				B--;
			}
			else
			{
				cnt++;
			}
		}
		else
		{
			if (P > 0)
			{
				P--;
			}
			else if (B > 0)
			{
				B--;
			}
			else
			{
				cnt++;
			}
		}
	
	}
	printf("%d\n", cnt);
	
	return 0;
}
