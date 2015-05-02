#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	const int max_size = 1e5 + 1;
	long long A[max_size], B[max_size];
	long long sum_A[max_size], sum_B[max_size];
	
	cin >> n;
	
	sum_A[0] = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> A[i];
		B[i] = A[i];
		sum_A[i] = sum_A[i-1] + A[i];
	}
	sort(B+1, B+n+1);
	sum_B[0] = 0;
	for (int i = 1; i <= n; i++) 
	{
		sum_B[i] = sum_B[i-1] + B[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int type, l, r;
		
		cin >> type >> l >> r;
		if (type == 1)
			cout << sum_A[r] - sum_A[l-1]  << endl;
		else
			cout << sum_B[r] - sum_B[l-1]  << endl;
	}	

	return 0;
}
