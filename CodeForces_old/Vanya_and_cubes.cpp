#include <iostream>

using namespace std;

int main(void)
{
	int i, n;
	cin >> n;
	for (i = 1; i * (i+1)/2 <= n; ++i)
	{
		n -= i * (i+1)/2;
	}
	cout << i-1 << endl;
	
	return 0;
}
