#include <iostream>
#include <vector>

using namespace std;

int points(int p, int t)
{
	return max(3*p/10, p-p/250*t);
}

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int misha_score = points(a, c);
	int vasya_score = points(b, d);
	if (misha_score == vasya_score)
	{
		cout << "Tie" << endl;
	}
	else if (misha_score > vasya_score)
	{
		cout << "Misha" << endl;
	}
	else
	{
		cout << "Vasya" << endl;
	}
	return 0;
}
