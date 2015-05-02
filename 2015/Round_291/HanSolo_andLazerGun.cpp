#include <iostream>
#include <vector>
#include <utility>
#include <map>
using namespace std;
int main()
{
	int n;
	double x1, y1;
	cin >> n >> x1 >> y1;
	map<double, int> hm;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		double  x2, y2;
		cin >> x2 >> y2;
		if (x1 == x2)
			ans = 1;
		else
		 hm[ (y2 - y1)/(x2-x1)]++;
	}
	cout << (ans + hm.size()) << endl;
	return 0;
}
