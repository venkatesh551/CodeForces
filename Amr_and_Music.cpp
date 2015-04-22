#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef pair<int, int> pii;

int main(void)
{
	int n, k;
	cin >> n >> k;
	vector<pii> v(n);
	for (int i = 0; i < n ; ++i)
	{
		int x;
		cin >> x ;
		v[i] = make_pair(x, i+1);
	}
	sort(v.begin(), v.end());
	int i;
	for (i = 0; i < n && k >= v[i].first; ++i)	
	{
		k -= v[i].first;
	}
	cout << i << endl;
	for (int j = 0; j < i; ++j)
	{
		cout << v[j].second << " ";
	}
	cout << endl;
	return 0;
}
