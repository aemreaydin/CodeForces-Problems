#include <iostream>
using namespace std;

int main()
{
    int n, h;
	cin >> n >> h;
	auto total = 0;
	while(n--)
	{
		int i;
		cin >> i;

		if (i > h)
			total += 2;
		else
			total++;
	}
	cout << total;
}