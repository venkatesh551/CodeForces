#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int x1 = 1e9, x2 = -1e9, y1 = 1e9, y2 = -1e9;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		x1 = min(x1, x);
		x2 = max(x2, x);
		y1 = min(y1, y);
		y2 = max(y2, y);
	}
	long long a = max(x2-x1, y2-y1);
	cout << a * a << endl;
	return 0;
}


