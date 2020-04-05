#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
	cin >> n;

	auto c_max = 0;
	for(auto i = 0; i != n; ++i)
	{
		int a;
		cin >> a;
		c_max = max(c_max, a);
	}
	cout << (c_max == 1 ? "HARD" : "EASY");
}