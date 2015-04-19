#include <iostream>
#include <vector>

using namespace std;

const int max_size = 30001;
vector<int> v(max_size, 0);
int last_val;

int max(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else if (b > c)
		return b;
	else
		return c;
}

vector<int> temp(max_size, -1);

int get_max_gems(int cur, int prev)
{
	int l = cur - prev;
	if (l <= 0 || cur > last_val)
		return 0;
	//cout << "cur = " << cur  << " prev = " << prev << " l = " << l <<  endl;
	if (temp[cur+l-1] == -1)
		temp[cur+l-1] = get_max_gems(cur + l - 1, cur);
	if (temp[cur +l] == -1)
		temp[cur+l] = get_max_gems(cur + l, cur);
	if (temp[cur+l+1] == -1) 
		temp[cur+l+1] = get_max_gems(cur + l + 1, cur);
	return v[cur] + max(temp[cur+l-1], temp[cur+l], temp[cur+l+1]);
}

int main(void)
{
	int n, d, x;
	cin >> n >> d;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		++v[x];
	}
	last_val = x;
	cout << get_max_gems(d, 0) << endl;	
	return 0;
}


