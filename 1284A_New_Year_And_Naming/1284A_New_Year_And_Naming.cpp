#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    std::vector<string> s(n);
    std::vector<string> t(m);
    
    for (auto i = 0; i != n; ++i)
        cin >> s[i];
    for (auto i = 0; i != m; ++i)
        cin >> t[i];

    int q;
    cin >> q;
    std::vector<int> y(q);
    for (int i = 0; i != q; ++i) {
        cin >> y[i]; 
        --y[i];
    }

    for (auto num : y) {
        auto in = num % n;
        auto im = num % m;

        cout << s[in] << t[im] << endl;
    }
}