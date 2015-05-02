/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Vitaly_and_Strings.cpp

* Purpose :

* Creation Date : 24-02-2015

* Last Modified : Wednesday 25 February 2015 12:46:50 AM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long LL;

int main()
{
	string s, t;
	cin >> s >> t;
	int n = s.length();
	int ind = n;
	for (int i = 0; i < n; ++i)
	{
		int d = t[i]-s[i];
		if (d == 1)
		{
			if ((i+1) < n)
			{
				s[i+1] = (s[i+1]-'a' + 1)%26 + 'a';
				cout << s << endl;
				return 0;
			}
		}
		else if (d > 1)
		{
			s[i] += 1;
			cout << s << endl;
			return 0;
		}
	}
	cout << "No such string" << endl;
	return 0;
}
