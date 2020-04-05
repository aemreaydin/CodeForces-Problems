#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
	cin >> n;

	string love = "I love ";
	string hate = "I hate ";
	string out;
	for(auto i = 0; i != n; ++i)
	{
		out += i % 2 == 0 ? hate : love;
		if (i + 1 == n)
			out += "it";
		else
			out += "that ";
	}
	cout << out;
}
