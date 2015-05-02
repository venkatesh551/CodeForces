#include <iostream>

using namespace std;
typedef long long LL;

int main()
{
	LL n, a, b;
	
	cin >> n >> a >> b;
	LL y = 6 * n;
	if (a * b < y)
	{
		if (a <= 6 && b <= n)
		{
			a = 6; b = n;
		}
		else if (a <= n && b <= 6)
		{
			a = n; b = 6;
		}
		else
		{
			LL p = (y + a - 1)/a;
			LL q = (y + b - 1)/b;
			if (p * a < q * b)
			{
				b = p;
			}
			else
			{
				a = q;
			}
		}
	}

	cout << a * b << endl;
	cout << a << " " << b << endl;
	
	return 0;	
}
