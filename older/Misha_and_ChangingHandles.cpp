#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void)
{
	int q;
	cin >> q;
	string old_handle, new_handle;
	map<string, string> m;
	while (q--)
	{
		cin >> old_handle >> new_handle;
		m[old_handle] = new_handle;
	}
	for (auto it = m.begin(); it!=m.end(); ++it)
	{
			string new_name = it->second;
			while (m.find(new_name) != m.end())
			{
				string temp = m[new_name];
				m[it->first] = temp;
				m.erase(new_name);
				new_name = temp;	 
			}
	}
	cout << m.size() << endl;
	for (auto it = m.begin(); it != m.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}
