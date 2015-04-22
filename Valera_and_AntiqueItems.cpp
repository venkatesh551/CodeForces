#include <iostream>

using namespace std;

int main()
{
	int n, v, A[51], indx = 0;
	
	cin >> n >> v;
	for (int i = 1; i <= n; ++i)
	{
		int k, min = 1e9;
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			int price;
			
			cin >> price;
			if (price < min)
			{
				min = price;
			}
		}
		if (v > min)
		{
			A[indx] = i;
			indx++;
		}
	}
	cout << indx << endl;
	for (int i = 0; i < indx; ++i)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}
