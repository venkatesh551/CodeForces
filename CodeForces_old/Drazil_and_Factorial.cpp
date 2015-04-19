/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Drazil_and_Factorial.cpp

* Purpose :

* Creation Date : 17-02-2015

* Last Modified : Wednesday 18 February 2015 07:27:21 AM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long LL;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	map<char, string> m;
	m['4'] = "223";
	m['6'] = "35";
	m['8'] = "2227";
	m['9'] = "2337";
	string ans = "";
	for (int i = 0; i < (int)s.length(); ++i)
	{
		if (s[i] > '1')
		{
			if (m.count(s[i]) > 0)
			{
				ans += m[s[i]];
			}
			else
			{
				ans += s[i];
			}
		}
	}
	sort(ans.begin(), ans.end());
	for (int i = ans.length()-1; i >= 0; --i)
	{
		cout <<ans[i];
	}
	cout << endl;
	return 0;
}
