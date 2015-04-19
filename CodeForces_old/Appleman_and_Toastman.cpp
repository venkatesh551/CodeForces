#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long LL;

int main()
{
	int n;
	cin >> n;
	vector <LL> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	LL ans = 0;
	if (n == 1)
	{
		ans = v[0];
	}
	else if (n == 2)
	{
		ans = (v[0] + v[1]) * 2;
	}
	else
	{
		int i;
		for (i = 0; i < n-1; ++i)
		{
			ans += v[i] * (i + 2);
		}
		ans += n * v[n-1];
	}
	cout << ans << endl;
	return 0;
}
