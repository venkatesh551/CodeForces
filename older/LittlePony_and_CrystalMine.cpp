#include <iostream>

using namespace std;

void print(char c, int cnt)
{
	for (int i = 0; i < cnt; ++i)
	{
		cout << c;
	}
}

int main(void)
{
	int n;
	
	cin >> n;
	int m = n/2;
	for (int i = 0; i < n; i++)
	{
		int x;
		if (i < m)
		{
			x = m - i;
		}
		else
		{
			x = i - m;
		}
		print('*', x);
		print('D', n-x-x);
		print('*', x);
		cout << endl;
	}

	return 0;
}
