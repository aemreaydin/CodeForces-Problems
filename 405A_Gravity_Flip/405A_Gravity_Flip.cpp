#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
	vector<int> vec(n);
	int i = 0;
	while(n--)
	{
		int a; cin >> a;
		vec[i++] = a;
	}

	sort(vec.begin(), vec.end());

	for(auto num : vec)
	{
		cout << num << " ";
	}
}