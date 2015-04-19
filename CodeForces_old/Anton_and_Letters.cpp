#include <iostream>

using namespace std;

int main()
{
	string s;
	int A[128] = {0};
	
	getline(cin, s);
	int n = s.size();
	for (int i = 0; i < n; ++i)
	{
		int x = s[i];
		A[x] = 1;
	}
	int ans = 0;
	for (int i = 'a'; i <= 'z'; ++i)
	{
		ans += A[i];
	}
	cout << ans << endl;
	return 0;
}
