#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{ 4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777 };
	int n; cin >> n;

	for(auto num : vec)
	{
		if(n % num == 0)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}