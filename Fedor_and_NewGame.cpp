#include <iostream>
#include <vector>

using namespace std;

int count_setbits(int n)
{
	int c = 0;
	
	while (n != 0)
	{
		c++;
		n &= (n-1);
	}
	return c;
}

int main(void)
{
	int n, m, k;
	
	cin >> n >> m >> k;
	vector <int> v(m+1);
	for (int i = 0; i <= m; ++i)
	{
		cin >> v[i];
	}
	int ans =  0;ee integers n, m
	for (int i = 0; i < m; ++i)
	{
		int r = v[i] ^ v[m];
		if (count_setbits(r) <= k)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
