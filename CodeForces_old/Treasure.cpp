#include <iostream>
#include <vector>

using namespace std;

void print_result(const string &s)
{
	int h = 0, l = 0, r = 0;
	int n = s.length();
	for (int i = 0; i < n; ++i)	
	{
		if (s[i] == '(')
			++l;
		else if (s[i] == ')')
			++r;
		else
			++h;
	}
	if (l <= r)
	{
		cout << "-1" << endl;
		return;
	}
	int d = l - r, dcopy = d, hcopy = h;
	int left = 0, right = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '(')
			++left;
		else if (s[i] == ')')
			++right;
		else
		{
			if (h > 1)	
			{
				++right; --d; --h;
			}
			else
			{
				right += d; d = 0;
			}
		}
		if (left < right)
		{
			cout << "-1" << endl;
			return;
		}	
	}
	for (int i = 0; i < hcopy-1; ++i)
	{
		cout << "1" << endl;
	}
	cout << dcopy - (hcopy - 1) << endl;
}

int main(void)
{
	string s;
	cin >> s;
	print_result(s);
	
	return 0;
}
