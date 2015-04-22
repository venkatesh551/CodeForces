#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, s;
	
	cin >> n >> s;
	s *= 100;
	int ans = -1;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		
		int d = s - (100 * x + y);
		if (d >= 0)
			ans = max(ans, d%100);
	}
	cout << ans << endl;
	return 0;
}
