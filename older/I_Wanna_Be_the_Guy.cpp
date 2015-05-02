#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector <int> v(n+1, 0);
	int p, x;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> x;
		v[x]++;
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		cin >> x;
		v[x]++;
	}
	int i;
	for (i = 1; i <= n && v[i] > 0 ; ++i)
		;
	if (i == n+1)
	{
		cout << "I become the guy." << endl;
	}
	else
	{
		cout << "Oh, my keyboard!" << endl;
	}
	return 0;
}

