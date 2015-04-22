/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Drazil_and_HisHappy_Friends.cpp

* Purpose :

* Creation Date : 17-02-2015

* Last Modified : Wednesday 18 February 2015 12:12:02 AM IST

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
const int MAX_SIZE = 107;
int main()
{
	int n, m;
	cin >> n >> m;
	int b;
	cin >> b;
	int beven = 0, bodd = 0, godd = 0, geven = 0;
	for (int i = 0; i < b; ++i)
	{
		int x;
		cin >> x;
		if (x%2 == 0)
		{
			beven = 1;
		}
		else
		{
			bodd = 1;
		}
	}
	int g; 
	cin >> g;
	for (int i = 0; i < g; ++i)
	{
		int x;
		cin >> x;
		if (x%2 == 0)
		{
			geven = 1;
		}
		else
		{
			godd = 1;
		}
	}

	int diff = abs(n-m);
	if (diff%2 == 1 &&  (b > 0 || g > 0))
	{
		cout << "Yes" << endl;
	}
	else if (b == n || g == m)
	{
		cout << "Yes" << endl;
	}
	else if (n != m && (geven*bodd || godd *beven))
	{
		cout << "Yes" <<endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
