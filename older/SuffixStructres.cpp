#include <iostream>

using namespace std;

bool is_subsequence(string &a, string &b)
{
	size_t x = a.size();
	size_t y = b.size();
	size_t i, j;
	
	for (i = j = 0; i < x && j < y; ++i)
	{
		if (a[i] == b[j])
		{
			j++;
		}
	}
	if (j == y)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool is_reordered(string &a, string &b)
{
	int m[128] = {0};
	
	for (size_t i = 0; i < a.size(); ++i)
	{
		int x = a[i];
		m[x]++;
	}
	for (size_t i = 0; i < b.size(); ++i)
	{
		int x = b[i];
		if (m[x] == 0)
		{
			return false;
		}
		else
		{
			m[x]--;
		}
	}
	return true;
}

int main(void)
{
	string a, b;
	
	cin >> a >> b;
	if (a.size() != b.size())	
	{
		if (is_subsequence(a, b))
		{
			cout << "automaton" << endl;
		}
		else if (is_reordered(a, b))
		{
			cout << "both" << endl;
		}
		else
		{
			cout << "need tree" << endl;
		}
	}
	else
	{
		if (a == b)
		{
			cout << "need tree" << endl;
		}
		else if (is_reordered(a, b))
		{
			cout << "array" << endl;
		}
		else
		{
			cout << "need tree" << endl;
		}
	}

	return 0;
}
