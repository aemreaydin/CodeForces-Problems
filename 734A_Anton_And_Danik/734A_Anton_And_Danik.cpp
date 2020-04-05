#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Should do one for instead of this
    auto a = count(s.begin(), s.end(), 'A');
    auto d = count(s.begin(), s.end(), 'D');

    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
}