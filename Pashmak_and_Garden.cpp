#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x1, x2, y1, y2;
	
	cin >> x1 >> y1 >> x2 >> y2;
	int a = abs(y1 - y2);
	int b = abs(x1 - x2);
	
	if (x1 == x2)
	{
		cout << x1 + a << " " << y1 << endl;
		cout << x2 + a << " " << y2 << endl;
	}
	else if (y1 == y2)
	{
		cout << x1 << " " << y1 + b << endl;
		cout << x2 << " " << y2 + b << endl;
	}
	else if (a == b)
	{
		cout << x1 << " "<< y2 << endl;
		cout << x2 << " " << y1 << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}

