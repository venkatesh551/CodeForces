#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int cnt = 0;
			
			if (i-1 >= 0)
				cnt += v[i-1][j] == 'o';
			if (i+1 < n)
				cnt += v[i+1][j] == 'o';
			if (j-1 >= 0)
				cnt += v[i][j-1] == 'o';
			if (j+1 < n)
				cnt += v[i][j+1] == 'o';
			if (cnt & 1)
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}
