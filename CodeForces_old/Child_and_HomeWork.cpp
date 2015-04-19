#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	vector <pair<int, char> > v;
	string s;
	int i;
	for (i = 0; i < 4; i++)
	{
		cin >> s;
		v.push_back(make_pair(s.size()-2, 'A' + i));
	}
	sort(v.begin(), v.end());
	for (i = 1; i < 4 && 2 * v[0].first <= v[i].first; i++)
		;
	if (i == 4)
	{
		cout << v[0].second << endl;
		return 0;
	}
	for (i = 0; i < 3 && v[3].first >= 2 * v[i].first; i++)
		;
	if (i == 3)
	{
		cout << v[3].second << endl;
	}
	else
	{
		cout << "C" << endl;
	}
	return 0;
}
