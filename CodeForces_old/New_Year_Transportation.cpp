#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, t;
	cin >> n >> t;
	vector<int> A(n);
	for (int i = 1; i < n; ++i)
	{
		cin >> A[i];
	}
	for (int s = 1; s < n; )
	{
		s = s + A[s];
		if (t == s)
		{
			cout << "YES" << endl;
			return 0;
		}
		//cout << s << " ";
	}
	cout << "NO" << endl;
	return 0;
}
