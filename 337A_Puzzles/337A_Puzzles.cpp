#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
	cin >> n >> m;

	std::vector<int> vec(m);
	for(auto i = 0; i != m; i++)
	{
		int a; cin >> a;
		vec[i] = a;
	}
	sort(vec.begin(), vec.end());

	int val = INT_MAX;
	for(auto i = 0; i != vec.size() - n + 1; i++)
	{
		val = min(vec[i + n - 1] - vec[i], val);
	}
	

	cout << val;
}