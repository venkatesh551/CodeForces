#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;
	string a, b;
	map<string, string> hm;
	while(m--)
	{
		cin >> a >> b;
		hm[a] = b;	
	}
	string wrd;
	while (n--)
	{
		cin >> wrd;
		if (wrd.length() <= hm[wrd].length())
		{
			cout << wrd;
		}
		else
		{
			cout << hm[wrd];
		}
		cout << " ";
	}
	cout << endl;
	return 0;
}
