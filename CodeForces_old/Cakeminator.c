#include <stdio.h>

int main()
{

	int r, c, ans;
	int i, j;
	int noOfRows, noOfCols ;
	char mat[11][11];

	scanf("%d%d", &r, &c);
	for(i = 0; i < r; i++)	
		scanf("%s",mat[i]);

	noOfRows = 0;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c && mat[i][j] != 'S'; j++)
				;
		if(j == c)
			noOfRows++;
	}
	noOfCols = 0;
	for(j = 0; j < c; j++)
	{
		for(i = 0; i < r && mat[i][j] != 'S'; i++)
				;
		if(i == r)
			noOfCols++;
	}
	ans = noOfRows * c + noOfCols * r - noOfRows * noOfCols ;
	printf("%d\n",ans);


	return 0;
}
