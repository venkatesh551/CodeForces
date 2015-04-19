#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int> left, const pair<int, int> right)
{
    if (left.first == right.first)
    	return left.second > right.second;
    else
    	return left.first < right.first;
}

int get_result(vector <pair <int, int> > a, vector <pair<int,int> > b, int x)
{
	int cnt = 0;
	int m = a.size(), n = b.size();
	int i = 0;
	
	while (1)
	{
		if (i < m && a[i].first <= x)
		{
			x += a[i].second;
			cnt++;
		}
		else
		{
			break;
		}
		if (i < n && b[i].first <= x)
		{
			x += b[i].second;
			cnt++;
		}
		else
		{
			break;
		}
		i++;
	}
	return cnt;
}

int main()
{
	int n, x;
	vector < pair<int,int> > a, b;
	
	cin >> n >> x;
	for (int i = 0; i < n; ++i)
	{
		int t, h, m;
		cin >> t >> h >> m;
		
		if (t == 0)
		{
			a.push_back(make_pair(h, m));
		}
		else
		{
			b.push_back(make_pair(h, m));
		}
	}
	sort(a.begin(), a.end(), compare);
	sort(b.begin(), b.end(), compare);
	cout << max(get_result(a, b, x), get_result(b, a, x)) << endl;
	return 0;
}
