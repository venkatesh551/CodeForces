#include  <iostream>

using namespace std;

int main()
{
	int n, a, b, c;
	
	a = b = 0;
	cin >> n;
	while (n--)
	{
		int x;
		
		cin >> x;
		
		if (x == 100)
			a++;
		else
			b++;
	}
	if ((a & 1) == 1 || (a == 0 && (b & 1) == 1))
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
	
	return 0;
}
