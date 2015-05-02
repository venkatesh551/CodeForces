#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i;
	for (i = 0; i < n && s[i] == '1'; ++i)
		;
	cout << (i < n ? (i + 1) : i) << endl;
	return 0;
}
