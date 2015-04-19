#include <iostream>

using namespace std;

int F(const string &s)
{
	int balance = 0;
	int max_balance = 0;
	int n = s.length();
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '(')
			balance += 1;
		else
			balance -= 1;
		max_balance = max(max_balance, balance);
	}
	return max_balance;
}

int main(void)
{
	int T;
	cin >> T;
	string s;
	while (T--)
	{
		cin >> s;
		int n = F(s);		
		for (int i = 0; i < n; ++i)
		{
			cout << '(' ;
		}
		for (int i = 0; i < n; ++i)
		{
			cout << ')' ;
		}
		cout << endl;
	}
	return 0;
}
