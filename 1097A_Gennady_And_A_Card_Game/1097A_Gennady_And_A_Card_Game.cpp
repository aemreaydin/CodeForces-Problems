#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string t;
    cin >> t;
    vector<string> h(5);
    cin >> h[0] >> h[1] >> h[2] >> h[3] >> h[4];

    auto out = false;
    for (auto& c : h) {
        if (c[0] == t[0] || c[1] == t[1])
            out = true;
    }
    cout << (out ? "YES" : "NO");
}