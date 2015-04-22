/***************************************************

* File Name : Pangram.cpp

* Purpose :

* Creation Date : 03-03-2015

* Last Modified : Tuesday 03 March 2015 09:49:04 AM IST

* Created By : Venkatesh

****************************************************/

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
	int n;
	string s;
	cin >> n >> s;
	if (n < 26)
		cout << "NO" << endl;
	else
	{
		int ascii_map[26] = {0};
		for (int i = 0; i < n; ++i)
		{
			int c;
			if (isupper(s[i]))
			{
				c = s[i] - 'A';
			}
			else
			{
				c = s[i] - 'a';
			}
			ascii_map[c] = 1;
		}
		int sum = 0;
		for (int i = 0; i < 26; ++i)
		{
			sum += ascii_map[i];
		}
		if (sum == 26)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
