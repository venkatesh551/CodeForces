#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m;
	
	cin >> n >> m;
	int ans = -1;
	if (n >= m)
	{
		for (int k = 1; k < n ;++k)
		{
			int y = n - m * k;
			int x = m * k - y;
			if (y >= 0 && x >= 0)
			{
				ans = x + y;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

