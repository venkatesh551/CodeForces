#include <iostream>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	string mid_str = "|#.......................|\n";
	if (n > 2)
	{
		mid_str[1] = 'O';
		n--;
	}
	string s[3] = {
		"|#.#.#.#.#.#.#.#.#.#.#.|D|)\n",
		"|#.#.#.#.#.#.#.#.#.#.#.|.|\n",
		"|#.#.#.#.#.#.#.#.#.#.#.|.|)\n"
	};
	for (int i = 1; n > 0; i += 2)
	{
		for (int j = 0; j < 3 && n > 0; ++j, --n)
		{
			s[j][i] = 'O'; 
		}
	}
	cout << "+------------------------+" << endl;
	cout << s[0] << s[1] << mid_str << s[2];	
	cout << "+------------------------+" << endl;
	return 0;
}

