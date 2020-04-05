#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    auto sf = 0;
    auto fs = 0;

    for (auto i = 0; i != s.size() - 1; ++i) {
        if (s[i] == 'S' && s[i+1] == 'F')
            ++sf;
        else if (s[i] == 'F' && s[i+1] == 'S')
            ++fs;            
    }

    cout << (sf > fs ? "YES" : "NO");
}