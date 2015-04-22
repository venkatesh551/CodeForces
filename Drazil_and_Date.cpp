/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Drazil_and_Date.cpp

* Purpose :

* Creation Date : 17-02-2015

* Last Modified : Tuesday 17 February 2015 10:34:55 PM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <cmath>
using namespace std;
typedef long long LL;

int main()
{
	int a, b, s;
	cin >> a >> b >> s;
	int sum = abs(a) + abs(b);
	if (s < sum)
	{
		cout << "No" << endl;
	}
	else
	{
		int d = s - sum;
		if (d &1)
			cout << "No" <<endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}
