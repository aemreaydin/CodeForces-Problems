#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	auto total = 0;
	auto i = 0;
	while(n--)
	{		
		auto temp = i;
		cin >> i;

		if (temp != i)
			total++;
	}
    std::cout << total;
}