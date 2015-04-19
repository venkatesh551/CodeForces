#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	long long small = 1e9+1, large = 0, s_cnt = 0, l_cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		long long x;
		
		cin >> x;
		if (x < small)		
		{	
			small = x;
			s_cnt = 1;
		}
		else if (x == small)
		{
			s_cnt++;
		}

		if (x > large)
		{
			large = x;
			l_cnt = 1;
		}
		else if (x == large)
		{	
			l_cnt++;	
		}

	}
	if (large == small)
	{
		cout << "0 " << s_cnt * (s_cnt - 1)/2 << endl;	
	}
	else
	{
		cout << large - small << endl;
		cout << l_cnt * s_cnt << endl;
	}
	return 0;
}
