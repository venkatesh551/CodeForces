#include <iostream>

using namespace std;

int main()
{
	int p, n;
	
	cin >> p >> n;
	const int max_size = 301;
	int ht[max_size] = {0};
	for (int i = 1; i <= n; ++i)
	{
		int x;
		
		cin >> x;
		int r = x % p;
		if (ht[r] == 1)
		{
			cout << i << endl;
			return 0;
		}
		else
		{	
			ht[r] = 1;
		}
	}
	cout << -1 << endl;
	return 0;
}
