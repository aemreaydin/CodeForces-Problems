#include <iostream>
#include <string>
using namespace std;

bool endsWith(const string& str, const string& suf) {
    return str.rfind(suf) == (str.size() - suf.size());
}

int main()
{
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (endsWith(s, "po"))
            cout << "FILIPINO\n";
        else if (endsWith(s, "desu") || endsWith(s, "masu"))
            cout << "JAPANESE\n";
        else if (endsWith(s, "mnida"))
            cout << "KOREAN\n";
    }
}