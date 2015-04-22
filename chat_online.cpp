#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int p, q, l, r;
	
	cin >> p >> q >> l >> r;
	vector < pair<int, int> > x, z;
	int a, b;
	for (int i = 0; i < p; ++i)
	{
		cin >> a >> b;
		x.push_back(make_pair(a, b));
	}
	for (int i = 0; i < q; ++i)
	{
		cin >> a >> b;
		z.push_back(make_pair(a, b));
	}
	vector<int> v(1001, 0);
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < q; ++j)
		{	
			if (x[i] >= z[j])
			{
				int c = max(l, x[i].first - z[j].second);
				int d = min(r, x[i].second - z[j].first);
				for (int k = c; k <= d; ++k)
				{
					v[k] = 1;
				}
			}
			else if (x[i].second >= z[i].first)
			{
				v[0] = 1;
			}
		}
	}
	int sum = 0;
	for (int i = l; i <= r; ++i)
	{
		sum += v[i];
	}
	cout << sum << endl;
	return 0;
}
