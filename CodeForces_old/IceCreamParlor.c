#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int T, C, L;
	int p[10001], i, j;

	scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d", &C, &L);
		for(i = 1; i <= L ; i++)
			scanf("%d", &p[i]);
		for(i = 1; i <= L ; i++)
		{
			for(j = i+1; j <= L; j++)
			{
				if(C == p[i] + p[j])
				{
					printf("%d %d\n", i, j);
					break;
				}
			}
			if(j <= L)
				break;
		}


	}

    return 0;
}
