#include <iostream>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	int ans = 0;
	while (n-- > 0)
	{
		int p, q;
		
		cin >> p >> q;
		if (q - p >= 2)
		{
			++ans;
		}
	}
	cout << ans << endl;
	return 0;
}
