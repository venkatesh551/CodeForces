#include <iostream>

using namespace std;
typedef long long LL;

int main(void)
{
	int n, m;
	
	cin >> n >> m;
	LL x = n / m;
	int a = n % m;
	cout << (m - a) * x * (x - 1)/2 + a * (x + 1) * x /2;
	LL y = n - m + 1;
	cout << " "<< y * (y-1)/2 << endl;
	return 0;
}
