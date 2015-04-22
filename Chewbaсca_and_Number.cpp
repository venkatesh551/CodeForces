#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int i, n = s.length();
	if (s[0] == '9')
		i = 1;
	else
		i = 0;
	for (; i < n; ++i)
	{
		if (s[i] > '4')
			s[i] = '0'+ '9' - s[i];
	}
	cout << s << endl;
	return 0;
}
