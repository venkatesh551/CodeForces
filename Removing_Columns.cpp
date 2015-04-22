#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, m;
	
	cin >> n >> m;
	vector<string> s(n);
	for (int i = 0; i < n; ++i)
		cin >> s[i];
	int col = -1, cnt = 0;
	for (int j = 0; j < m; ++j)
	{
		int i;
		for (i = 1; i < n; ++i)
		{
			if (s[i-1][j] > s[i][j])
			{
				++cnt;
				break;
			}
		}
		if (i == n)
		{
			col = j;
			break;
		}
	}
	if (col == -1)
	{
		cout << m << endl;
		return 0;
	}
	for (int j = col+1; j < m; ++j)
	{
		for (int i = 1; i < n; ++i)
		{
			if (s[i][col] == s[i-1][col] && s[i-1][j] > s[i][j])
			{
				++cnt;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}


