#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	map<int, int> m;
	set<int> a, b;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		m[x] = y;
		a.insert(x);
		b.insert(y);
	}
	vector<int> r(1), v(n);
	set_difference(a.begin(), a.end(), b.begin(), b.end(), r.begin());
	int p = r[0], q = m[0];
	for (int i = 0; i < n; i += 2)
	{
		v[i] = p;
		p = m[p];	
	}
	for (int i = 1; i < n; i += 2)
	{
		v[i] = q;
		q = m[q];	
	}
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";		
	}
	cout << endl;
	return 0;
}
