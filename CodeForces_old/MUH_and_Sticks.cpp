#include <iostream>

using namespace std;

int main(void)
{
	int d[10] = {0};
	for (int i = 0; i < 6; ++i)
	{
		int x;
		
		cin >> x;
		d[x]++;
	}
	bool x = false, y = false;
	for (int i = 1; i < 10; ++i)
	{
		if (d[i] == 6)
		{
			x = y = true;
		}
		else if (d[i] == 4)
		{
			x = true;
		}
		else if (d[i] == 2)
		{
			y = true;
		}
	}
	if (x && y)
	{
		cout << "Elephant" << endl;
	}
	else if (x)
	{
		cout << "Bear" << endl;	
	}
	else
	{
		cout << "Alien" << endl;
	}
	return 0;
}
