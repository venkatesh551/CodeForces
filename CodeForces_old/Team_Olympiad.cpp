#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v[4];
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;
		v[x].push_back(i);
	}
	int ans = min(min(v[1].size(), v[2].size()), v[3].size());
	cout << ans << endl;
	for (int i = 0; i < ans; ++i)
	{
		cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;	
	}
	
	return 0;
}
