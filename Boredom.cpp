#include <iostream>

using namespace std;
int main()
{
	const int MAX_SIZE = 1e5 + 7;
	int A[MAX_SIZE] = {0};
	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		
		cin >> x;
		A[x]++;
	}
	int ans = 0;
	for (int i = MAX_SIZE; i > 0; --i)
	{
		if (A[i] > 0)
		{
			while (A[i] > 0 && (A[i-1] > 0 || A[i+1] > 0))
			{
				ans +=  i;
				A[i-1]--;
				A[i+1]--;
				A[i]--;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
