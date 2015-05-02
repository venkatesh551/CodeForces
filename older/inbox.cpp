#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> v(n);
	int i;
	for (i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	for (i = 0; i < n && v[i] == 0; ++i)	
		;
	int last_index = i;
	int ans;
	ans = i < n ? 1 : 0;
	for (int j = i+1; j < n; ++j)
	{
		if (v[j] == 1)
		{
			ans += min(2, j - last_index);	
			last_index = j;
		}	
	}
	cout << ans << endl;
	return 0;
}
