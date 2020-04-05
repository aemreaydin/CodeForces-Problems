#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto i = 0; i != n; i++) {
        int num;
        cin >> num;
        v[num - 1] = i + 1;
    }
    for (auto i : v) {
        cout << i << " ";
    }
}