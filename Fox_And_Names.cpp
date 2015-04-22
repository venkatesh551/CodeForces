#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vector<char> seq;
	seq.push_back(v[0][0]);
	map<char, int> m;
	m[seq[0]]++;
	for (int i = 1; i < n; ++i)
	{
		if (v[i][0] != v[i-1][0])
		{
			char c = v[i][0];
			seq.push_back(c);
			m[c]++;
			if (m[c] > 1)			
			{
				cout << "Impossible" << endl;
				return 0;
			}
		}
	}
	for (char c = 'a'; c <= 'z'; ++c)
	{
		if (m[c] == 0)
		{
			seq.push_back(c);
		}
	}
	for (auto i = 0; i < seq.size(); ++i)
	{
		cout << seq[i];
	}
	cout << endl;
	return 0;
}
