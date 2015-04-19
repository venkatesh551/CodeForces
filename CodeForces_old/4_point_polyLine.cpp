#include <iostream>

using namespace std;

int main(void)
{
	int n, m;
	
	cin >> n >> m;
	if (n > 0 && m > 0)
	{
		cout << n << " " << m << endl;
		cout << "0 0" << endl;
		if (n > m)
		{
			cout << n << " 0" << endl;
			cout << "0 " << m << endl;
		}
		else
		{
			cout << "0 " << m << endl;
			cout << n << " 0" << endl;
		}
	}
	else if (n == 0)
	{
		cout << "0 1" << endl;
		cout << "0 " << m << endl;
		cout << "0 0" << endl;
		cout << "0 " << m-1 << endl;
	}
	else
	{
		cout << "1 0" << endl;
		cout << n << " 0" << endl;
		cout << "0 0" << endl;
		cout << n-1 << " 0" << endl;
	}

	return 0;
}
