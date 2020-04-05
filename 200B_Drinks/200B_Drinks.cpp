#include <iostream>
using namespace std;

int main()
{
    int n;
	cin >> n;
	auto total = 0.0f;
	for(auto i = 0; i != n; ++i)
	{
		float p;
		cin >> p;
		total += p;
	}
	cout << (total / n);
}