#include <iostream>
using namespace std;
#define MAX_SIZE 1000001
static char s[MAX_SIZE];

int main(void)
{
	int i, j;
	long long left, right;
	
	cin >> s;
	left  = right = 0;
	for (i = 0; s[i] != '^'; ++i)
		;
	for (j = 0; j < i; ++j)	
	{
		if (s[j] > '0' && s[j] <= '9')
		{
			left += (s[j]- '0') * (i-j);
		}	
	}
	for (j = i+1; s[j]; ++j)	
	{
		if (s[j] > '0' && s[j] <= '9')
		{
			right += (s[j]- '0') * (j-i);
		}	
	}
	if (left == right)
	{
		cout << "balance" << endl;
	}
	else if (left > right)
	{
		cout << "left" << endl;
	}
	else
	{
		cout << "right" << endl;
	}
	return 0;
}
