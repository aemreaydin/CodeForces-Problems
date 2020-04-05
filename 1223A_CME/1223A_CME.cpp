#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    std::vector<int> vec(n);
    for (auto i = 0; i != n; ++i) {
        int q;
        cin >> q;
        vec[i] = q;
    }
    for (auto q : vec) {
        if (q == 2)
            cout << 2 << endl;
        else if (q % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}