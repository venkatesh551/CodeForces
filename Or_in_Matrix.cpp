#include <iostream>

using namespace std;

int main(void)
{
	const int ROW = 101;
	const int COL = 101;
	
	int m, n;		
	cin >> m >> n;
	int mat[ROW][COL];
	int r[ROW] = {0}, c[COL] = {0};
	
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cin >> mat[i][j];
			if (mat[i][j] == 0)
			{
				r[i] = 1;
				c[j] = 1;
			}
		}
	}
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)	
		{
			if (mat[i][j] && r[i] && c[j])	
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cout << !(r[i] || c[j]) << " ";
		}
		cout << endl;
	}
	return 0;
}
