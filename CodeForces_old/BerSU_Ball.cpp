#include <iostream>

using namespace std;

void read(int *A)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		++A[x];
	}
}

int main()
{
	const int MAX = 107;
	int A[MAX] = {0}, B[MAX] = {0};
	read(A);
	read(B);
	int result = 0;
	for (int i = 1; i < MAX-1; ++i)
	{
		for (int j = -1; A[i] && j < 2; ++j)	
		{
			int x = min(A[i], B[i+j]);
			A[i] -= x;
			B[i+j] -= x; 
			result += x;
		}
	}
	cout << result << endl;
	return 0;
}
