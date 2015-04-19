#include <iostream>

using namespace std;
typedef long long LL;

int main(void)
{
	LL l, r;	
	
	cin >> l >> r;
	LL d = r - l;
	if (d < 2 || (d == 2 && (l & 1) == 1))
	{
		cout << "-1" << endl;
	}
	else
	{
		LL x = l + ((l & 1) == 1);
		cout << x << " " << x + 1 << " " << x + 2 << endl;		
	}
	return 0;
}
