#include <iostream>

using namespace std;

int main(void)
{
	int n, x;
	cin >> n >> x;
	int start = 1, ans = 0;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		int  p = (a - start)/x;
		ans += 1 + b - (start + x * p);
		start = b + 1;		
	}
	cout << ans << endl;
	return 0;
}
