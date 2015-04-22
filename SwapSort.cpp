#include <iostream>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int, int> pii;

void selection_sort(vector<int> &a)
{ 
	vector<pii> r;
	int n = a.size();
	for (int j = 0; j < n-1; j++)
	{
    	int iMin = j;
	    for (int i = j+1; i < n; i++)
	    {
    	    if (a[i] < a[iMin])
    	    {
    	        iMin = i;
    	    }
    	}
 
    	if(iMin != j)
    	{
    	    swap(a[j], a[iMin]);
    	    r.push_back(make_pair(j, iMin));
    	}
    }
    cout << r.size() << endl;
    for (size_t i = 0; i < r.size(); ++i)
    {
    	cout << r[i].first << " " << r[i].second << endl;
    }
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	selection_sort(v);	
	return 0;	
}
