/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : A_and_BandTeamTraining.cpp

* Purpose :

* Creation Date : 28-02-2015

* Last Modified : Saturday 28 February 2015 06:50:04 PM IST

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

LL get_team_count(int n, int m)
{
	LL cnt = 0;
	while (n > 0 && m > 0 && (n + m) > 2)
	{
		if (n > m)
		{
			 n -= 2;
			 m--;
		}
		else
		{
			n--;
			m -= 2;
		}
		++cnt;
	}
	return cnt;
}

int main()
{
	int n, m;
	cin >> n >> m;
	cout << get_team_count(n, m) << endl;
	return 0;
}
