#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;
typedef pair<int, int> pii;
typedef long long LL;

int main(void)
{
	int n, r, avg;
	cin >> n >> r >> avg;
	vector<pii> v(n);
	LL cur_sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		cur_sum += x;
		v[i] = make_pair(y, x);
	}
	sort(v.begin(), v.end());
	LL req = (LL) n * avg - cur_sum;
	LL cnt = 0;
	for (int i = 0; i < n && req > 0; ++i)	
	{
		LL d = r - v[i].second;
		if (d <= req)
		{
			cnt += v[i].first * d;
			req -= d;
		}
		else
		{
			cnt += v[i].first * req;
			req = 0 ;
		}
	}
	cout << cnt << endl;
	return 0;
}
