#include <iostream>
#include <cstring>

using namespace std;

inline bool is_sol_exist(int m, int s)
{	
	return s > 0 && (s <= 9*m);
}

void print(int *a, int m)
{
	for (int i = 0; i < m; ++i)
	{
		cout << a[i];
	}
}

int main()
{
	int m, s;
	
	cin >> m >> s;
	if (m == 1 && s == 0)
	{
		cout << "0 0" << endl;
		return 0;
	}
	else if (!is_sol_exist(m, s))
	{
		cout << "-1 -1" << endl;
		return 0;
	}
	int a[101] = {0};
	int sum = s-1;
	a[0] = 1;
	for (int i = m-1; i >= 0; --i)	
	{
		if (sum > 9)		
		{
			a[i] += 9;
			sum -= 9;
		}
		else
		{
			a[i] += sum;
			break;	
		}		
	}
	print(a, m);
	memset(a, 0, sizeof(a));
	sum = s;
	for (int i = 0; i < m; ++i)
	{
		if (sum > 9)	
		{
			a[i] = 9;
			sum -= 9;	
		}
		else
		{
			a[i] = sum;
			break;	
		}
	}
	cout << " ";
	print(a, m);
	cout << endl;
	return 0;
}
