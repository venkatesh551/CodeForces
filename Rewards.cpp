#include <iostream>

using namespace std;

int sum(void)
{
	int s = 0;
	
	for (int i = 0; i < 3; ++i)
	{
		int x; 
		
		cin >> x;
		s += x;
	}
	return s;
}

int main()
{
	int n, a, b;
	
	a = sum();
	b = sum();
	cin >> n;
	int x = (a + 4)/5 + (b + 9)/10;
	if (n >= x)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}
