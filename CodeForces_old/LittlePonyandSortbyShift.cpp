 #include <iostream>

using namespace std;


int main(void)
{
	int n;
	const int max_size = 1e5;
	int i, j, a[max_size];
	
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (i = 1; i < n && a[i] >= a[i-1]; i++)
		;
	for (j = i+1; j < n && a[j] >= a[j-1]; j++)
		;
	int min;
	if (i == n)
	{
		min = 0;
	}
	else if (j == n && a[i] <= a[0] && a[n-1] <= a[0])
	{
		min = n - i;
	}
	else
	{
		min = -1;
	}
	cout << min << endl;

	return 0;
}
