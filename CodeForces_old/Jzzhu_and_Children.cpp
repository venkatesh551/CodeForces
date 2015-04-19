#include <iostream>

using namespace std;

int main()
{
	
	int n, m;
	
	cin >> n >> m;
	int ans = 0, max = 0;
	
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;
		
		int cnt = (x + m - 1)/m;
		if (cnt >= max)
		{
			max = cnt;
			ans = i;
		}
	}
	cout << ans << endl;
	
	return 0;
}
