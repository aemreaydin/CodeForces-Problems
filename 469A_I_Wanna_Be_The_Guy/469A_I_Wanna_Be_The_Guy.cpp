#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n; cin >> n;
	int p, q;
	cin >> p;
	set<int> s;
	while(p--)
	{
		int a; cin >> a;
		s.insert(a);
	}
	cin >> q;
	while(q--)
	{
		int a; cin >> a;
		s.insert(a);
	}
	cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!");
}