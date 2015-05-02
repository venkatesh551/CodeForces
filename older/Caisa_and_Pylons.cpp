#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans;
	cin >> ans;
	for (int i = 1; i < n; ++i)
	{
		int x;
		
		cin >> x;
		ans = max(ans, x);
	}
	cout << ans << endl;
	return 0;
}
