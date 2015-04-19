#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int ascii_map[26] = {0};
	for (size_t i = 0; i < s.length(); ++i)
	{
		int c = s[i] - 'A';
		ascii_map[c]++;	
	}
	
	sort(ascii_map, ascii_map + 26);
	int ans = 0;
	for (int i = 26-1; i >= 0 && k > 0; --i)
	{
		int cnt = ascii_map[i];
		if (cnt >= k)
		{
			ans += k * k;
		}
		else
		{
			ans += cnt * cnt;
		}
		k -= cnt;
	}
	cout << ans << endl;
	return 0;
}
