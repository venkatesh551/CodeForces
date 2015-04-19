#include <iostream>

using namespace std;

bool is_divisible_by_4(string &s)
{
	int len = s.size();
	int n = (s[len-1] - '0');
	if (len > 1)
	{
		n += (s[len-2] - '0') * 2;
	}
	return n % 4 == 0;
}

int main()
{
	string s;
	
	cin >> s;
	if (is_divisible_by_4(s))
	{
		cout << "4" << endl;
	}
	else
	{
		cout << "0" << endl;
	}

	return 0;
}
