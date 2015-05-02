/***************************************************

* File Name : A_and_B_andCompilation Errors.cpp

* Purpose :

* Creation Date : 28-02-2015

* Last Modified : Saturday 28 February 2015 08:28:03 PM IST

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

void read(vector<int> &v)
{
	for (int i = 0; i < (int)v.size(); ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n-1), c(n-2), r(2);
	read(a);
	read(b);
	read(c);
	set_difference(a.begin(), a.end(), b.begin(),b.end(), r.begin());
	cout << r[0] << endl;
	set_difference(b.begin(), b.end(), c.begin(), c.end(), r.begin());
	cout << r[0] <<endl;
	return 0;
}
