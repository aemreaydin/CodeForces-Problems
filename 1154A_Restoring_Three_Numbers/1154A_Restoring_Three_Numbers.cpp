#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    std::vector<int> vec{ a, b, c, d };
    sort(vec.begin(), vec.end());

    cout << vec[3] - vec[1] << " " << vec[3] - vec[2] << " " << vec[3] - vec[0];
}