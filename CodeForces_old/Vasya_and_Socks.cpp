#include <iostream>

using namespace std;

int main()
{
	int n, m;
	
	cin >> n >> m;
	int ans = n;
	int last = 0;
	while (n > 0)
	{
		int temp = ans/m - last/m;
		last = ans;
		ans += temp;
		n /= m;
	}
	cout << ans << endl;
	return 0;
}
