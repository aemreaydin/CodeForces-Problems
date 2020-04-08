#include <iostream>
#include <map>
using namespace std;

int main()
{
    int s, n; cin >> s >> n;
	multimap<int, int> map;
	while(n--)
	{
		int ds, de; cin >> ds >> de;
		map.insert(pair<int, int>(ds, de));
	}
	bool fin = true;
	for(auto item : map)
	{
		if(item.first < s)
		{
			s += item.second;
		}
		else
		{
			fin = false;
		}
	}
	cout << (fin ? "YES" : "NO");
}