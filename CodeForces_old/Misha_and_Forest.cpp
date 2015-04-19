#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, int> pii;

int main(void)
{
	int n;
	cin >> n;
	vector<int>  degree(n), xor_sum(n);
	queue<int> q;
	for (int i = 0; i < n; ++i)
	{
		cin >> degree[i] >> xor_sum[i];
		if (degree[i] == 1)
		{
			q.push(i);
		}
	}
	vector<pii> ans;
	while (!q.empty())
	{
		int from = q.front();
		q.pop();
		if (degree[from] == 0)
		{
			continue;
		}
		int to = xor_sum[from];
		ans.push_back(make_pair(from, to));
		--degree[to];
		xor_sum[to] ^= from;
		if (degree[to] == 1)
		{
			q.push(to);
		}
	}
	cout << ans.size() << endl;
	for (auto it = ans.begin(); it != ans.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}
