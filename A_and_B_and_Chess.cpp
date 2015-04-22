/***************************************************

* File Name : A_and_B_and_Chess.cpp

* Purpose :

* Creation Date : 28-02-2015

* Last Modified : Saturday 28 February 2015 07:59:06 PM IST

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
	map<char, int> ht;
	ht['Q'] = 9;
	ht['R'] = 5;
	ht['B'] = ht['N'] = 3;
	ht['P'] = 1;
	string s;
	int w_sum = 0, b_sum = 0;
	for (int i = 0; i < 8; ++i)
	{
		cin >> s;
		for (int j = 0; j < (int)s.length(); ++j)
		{
			if (islower(s[j]))
			{
			char c = toupper(s[j]);
			b_sum += ht[c];
			}
			else
			{
			w_sum += ht[s[j]];
			}
		}
	}
	if (w_sum == b_sum)
	{
		cout << "Draw" << endl;
	}
	else if (w_sum > b_sum)
	{
		cout << "White" << endl;
	}
	else
	{
		cout << "Black" << endl;
	}
	return 0;
}
