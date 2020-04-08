#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, b;
	cin >> n >> a >> b;

	vector<int> v;
	while(n--)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	cout << v[b] - v[b - 1];
}