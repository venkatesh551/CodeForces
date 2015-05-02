#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int n, l;
	cin >> n >> l;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	double result = max(0.0, v[0]-0.0);
	for (int i = 1; i < n; ++i)
	{
		result = max(result, (v[i] - v[i-1])/2.0);
	}
	result = max(result, (double)l-v[n-1]);
	cout.precision(15);
	cout << fixed << result << endl;
	return 0;
}
