#include <iostream>
#include <vector>

using namespace std;

int bin_search(vector<int> &v, int k) 
{
	int l = 1, h = v.size();
	
	while (l <= h)
	{
		int m = (l + h)/2;
		
		if (v[m] ==  k)
		{
			return m;
		}
		else if (v[m] < k)
		{
			l = m + 1;
		}
		else
		{
			h = m - 1;
		}
	}
	return l;
}

int main(void)
{
	int n;
	
	cin >> n;
	vector<int> v(n+1);
	v[0] = 0;
	for (int i = 1; i <= n ; ++i)
	{
		cin >> v[i];
		v[i] += v[i-1];
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int x;
		
		cin >> x;
		cout << bin_search(v, x) << endl;
	}

	return 0;
}
