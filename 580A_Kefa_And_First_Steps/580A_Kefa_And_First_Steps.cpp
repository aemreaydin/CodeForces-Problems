#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
	cin >> n;
	int segment = 0;
	int total = 0;
	int current = 0;
	int a = 0;
	while(n--)
	{
		current = a;
		cin >> a;

		if(a < current)
		{
			total = max(segment, total);
			segment = 0;
		}
		segment++;
	}
	cout << max(total, segment);
}