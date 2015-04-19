#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	int mn = 1e5, mx = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		mn = min(mn, v[i]);
		mx = max(mx, v[i]);
	}
	int diff = mx - mn;
	if (diff > k)
	{
		cout << "NO" << endl;
	}
	else
	{
		int flag = true;
		vector <int> ans[n];
		int c = 0;
		while (flag)
		{
			flag = false;
			c =  (c + 1) % k;
			if (c == 0)
				c = k;
			for (int i = 0; i < n; ++i)
			{
				if (v[i] > 0)
				{
					--v[i];
					ans[i].push_back(c);
					flag = true;
				}
			}
		}
		cout << "YES" << endl;
		for (int i = 0; i < n; ++i)
		{
			for (auto j = 0; j < ans[i].size(); ++j)
			{
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

