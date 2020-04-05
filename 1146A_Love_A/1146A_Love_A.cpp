#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    auto a = count(s.begin(), s.end(), 'a');
    auto na = s.size() - a;
    
    if (a <= na)
        cout << 2 * a - 1;
    else
        cout << s.size();
}