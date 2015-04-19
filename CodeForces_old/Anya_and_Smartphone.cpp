/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Anya_and_Smartphone.cpp

* Purpose :

* Creation Date : 24-02-2015

* Last Modified : Tuesday 24 February 2015 10:59:02 PM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
typedef long long LL;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> v(n);
	unordered_map<int, int> ht;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		ht[v[i]] = i;
	}
	LL ans = 0;
	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;
		int pos = ht[x];
		if (pos > 0)
		{
			ht[v[pos-1]] = pos;
			ht[x] = pos-1;
			swap(v[pos], v[pos-1]);
		}
		ans += 1 + pos/k;
	}
	cout << ans << endl;
	return 0;
}
