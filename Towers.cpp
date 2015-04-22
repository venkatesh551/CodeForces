#include <iostream>
#include <vector>

using namespace std;

int get_minIndex(const vector<int> &v)
{
	int min_ind = 0;
	
	for (size_t i = 1; i < v.size(); ++i)
	{
		if (v[i] < v[min_ind])
		{
			min_ind = i;
		}
	}
	return min_ind;
}

int get_maxIndex(const vector<int> &v)
{
	int max_ind = 0;
	
	for (size_t i = 1; i < v.size(); ++i)
	{
		if (v[i] > v[max_ind])
		{
			max_ind = i;
		}
	}
	return max_ind;
}

int main()
{
	int n, k;
	
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)	
	{
		cin >> v[i];
	}
	vector<pair<int, int> > ans;
	int min_ind = get_minIndex(v);
	int max_ind = get_maxIndex(v);
	while (v[max_ind] - v[min_ind] > 1 && k > 0)
	{
		v[max_ind]--;
		v[min_ind]++;
		ans.push_back(make_pair(max_ind+1 , min_ind+1));
		k--;
		min_ind = get_minIndex(v);
		max_ind = get_maxIndex(v);
	}
	cout << v[max_ind] - v[min_ind] << " " << ans.size() << endl;
	for (size_t i = 0; i < ans.size(); ++i)
	{
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	return 0;
}
