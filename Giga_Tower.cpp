#include <iostream>

using namespace std;

bool is_lucky(int n)
{
	while (n != 0)
	{
		int r = n % 10;
		n /= 10;
		if (r == 8 || r == -8)
			return true;
	}
	return false;
}

int main(void)
{
	int n;
	
	cin >> n;
	int i;
	for (i = 1; i < 17 && !is_lucky(n+i); ++i)
		;
	cout << i << endl;
	return 0;
}
