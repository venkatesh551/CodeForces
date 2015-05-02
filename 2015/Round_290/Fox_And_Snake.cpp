#include <iostream>
#include <vector>

using namespace std;
const int MAX_SIZE = 51;
int main(void)
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)	
	{
		if ((i % 2) == 0)
		{
			cout << string(m, '#');
		}
		else if (i % 4 == 1)
		{
			cout << string(m-1, '.') << '#';
		}
		else
		{
			cout << '#' << string(m-1, '.');
		}
		cout << endl;
	}
	return 0;
}
