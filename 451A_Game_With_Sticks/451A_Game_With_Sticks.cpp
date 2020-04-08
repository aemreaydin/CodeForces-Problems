#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n, k; cin >> n >> k;
	int val = min(n, k);

	cout << (val % 2 == 0 ? "Malvika" : "Akshat");
}