#include <iostream>

using namespace std;

int main()
{

	int n, m;
	
	cin >> n >> m;
	
	int cap = m;
	int ans = 1;
	for (int i = 0; i < n; ++i)
	{		
		int x;
		
		cin >> x;
		
		if (x <= cap)
		{
			cap -= x;
		}
		else
		{
			cap = m - x;
			ans++;
		}
	}
	cout << ans << endl;
	
	return 0;
}
