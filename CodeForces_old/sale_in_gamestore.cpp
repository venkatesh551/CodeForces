#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int max = v[n-1];
	int ans = 1;
	for (int i = 0; i < n-1; ++i)
	{
		if (v[i] <= max)
		{
			max -= v[i];
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
