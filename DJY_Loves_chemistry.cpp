#include <iostream>
#include <cmath>

using namespace std;

#define MAX 51
static int P[MAX], R[MAX];

void make_sets(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		P[i] = i;
		R[i] = 0;
	}
}

int find(int x)
{
	if (x == P[x])
	{
		return x;
	}
	else
	{
		return find(P[x]);
	}
}

void join(int x, int y)
{
	int px = find(x);
	int py = find(y);

	if (px == py)
	{
		return;
	}
	if (R[px] > R[py])
	{
		P[py] = px;
	}
	else if (R[px] < R[py])
	{
		P[px] = py;
	}
	else
	{
		P[px] = py;
		R[py]++;
	}
}


int main()
{
	int n, m;

	cin >> n >> m;
	make_sets(n);
	for (int i = 0; i < m; i++)
	{
		int x, y;
	
		cin >> x >> y;	
		join(x, y);
	}
	int comp_cnt[MAX] = {0};
	for (int i = 1; i <= n; i++)
	{
		int p = find(i);
		comp_cnt[p]++;
	}
	long long ans  = 1;
	for (int i = 1; i <= n; i++)
	{
		if (comp_cnt[i])
		{
			ans *= pow(2, comp_cnt[i]-1);
		}
	}
	cout << ans << endl;
	return 0;
}
