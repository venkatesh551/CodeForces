#include <iostream>

using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int i, ind = -1;
	int n = s.length();
	for (i = 0; i < n; ++i)
	{
		if (s[i] % 2 == 0)
		{
			ind = i;
			if (s[i]  < s[n-1])
			{
				break;
			}
		}
	}
	if (ind == -1)
	{
		cout << "-1" << endl;
	}
	else
	{
		swap(s[ind], s[n-1]);
		cout << s << endl;
	}
	return 0;
}
