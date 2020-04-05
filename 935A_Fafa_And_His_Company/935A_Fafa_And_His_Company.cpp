#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    auto total = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0)
            ++total;
    }

    cout << total;
}