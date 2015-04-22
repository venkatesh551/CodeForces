#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	vector <pair<int, int> > v;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());
	int i;
	for (i = 1; i < n && v[i].second > v[i-1].second; ++i)
		;
	if (n > 1 && i != n)
	{
		cout << "Happy Alex" << endl;
	}
	else
	{
		cout << "Poor Alex" << endl;
	}
	
	return 0;
}
