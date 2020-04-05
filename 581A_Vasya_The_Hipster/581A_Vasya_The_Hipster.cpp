#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
	cin >> a >> b;

	auto l = min(a,b);
	auto m = max(a, b);
	cout << l << " " << (m - l) / 2;
}