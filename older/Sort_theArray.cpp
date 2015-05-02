#include <iostream>

using namespace std;

int main()
{
	const int MAX_SIZE = 1e5;
	int A[MAX_SIZE];
	int n;
	cin >> n;
	int i;
	A[0] = 0;
	A[n+1] = 1e9+7;
	for (i = 1; i <= n; ++i)
	{
		cin >> A[i];
	}
	for (i = 2; i <= n && A[i] > A[i-1]; ++i)
		;
	int s = i - 1;
	for (    ;i <= n && A[i] < A[i-1]; ++i)
		;
	int e = i - 1;
	for (   ; i <= n && A[i] > A[i-1]; ++i)
		;
	if (i == n+1)
	{
		if (A[e] > A[s-1] && A[s] < A[e+1])
		{
			cout << "yes" << endl;
			cout << s << " "<< e << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	else
	{
		cout << "no" << endl;
	}


	return 0;
}
