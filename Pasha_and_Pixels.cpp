#include <iostream>
#include <vector>

using namespace std;
const int MAX_SIZE = 1e3 + 7;
int v[MAX_SIZE][MAX_SIZE];

bool isLose(int i, int j)
{
	
	return (v[i-1][j-1] && v[i-1][j] && v[i][j-1]) ||
			(v[i-1][j] && v[i-1][j+1] && v[i][j+1]) ||
			(v[i][j+1] && v[i+1][j] && v[i+1][j+1]) ||
			(v[i][j-1] && v[i+1][j-1] && v[i+1][j]);
}

int main(void)
{
	int n, m, k;
	cin >> n >> m >> k;
	
	for (int i = 1; i <= k; ++i)
	{
		int x, y;
		cin >> x >> y;
		x += 2; y += 2;
		v[x][y] = 1;
		if (isLose(x, y))
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "0" << endl;
	return 0;
}
