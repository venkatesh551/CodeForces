#include <iostream>

using namespace std;
typedef long long LL;

int main(void)
{
	LL n;
	cin >> n;
	LL ans = n/2;
	if (n & 1)
	{
		ans -= n;
	}
	cout << ans << endl;
	return 0;
}
