#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int k;
	cin >> k;
	int w[26];
	int max = 0;
	for (int i = 0; i < 26; ++i)
	{
		cin >> w[i];
		if (max < w[i])
		{
			max = w[i];
		}
	}
	int ans = 0;
	int n = s.size();
	for (int i = 0; i < n; ++i)
	{
		ans += w[(int)s[i] - 'a'] * (i+1);
	}
	int temp = n+k;
	ans += max * (temp * (temp + 1) / 2 - n * (n + 1)/2);
	cout << ans << endl;
	return 0;
}
