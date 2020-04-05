#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    auto o = count(s.begin(), s.end(), 'n');
    auto z = count(s.begin(), s.end(), 'z');
    for (int i = 0; i != o; ++i) {
        cout << "1 ";
    }
    for (int i = 0; i != z; ++i) {
        cout << "0 ";
    }
}