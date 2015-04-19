#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end());
	int ans = v[0];
	v[1] -= v[0];
	v[2] -= v[0];
	while (v[1] >= 1 && v[2] >= 2)
	{
		int x = min(v[1], v[2]/2);
		ans += x;
		v[1] -= x;
		v[2] -= 2 * x;
		sort(v.begin()+1, v.end());
	}
	cout << ans << endl;
	return 0;
}
