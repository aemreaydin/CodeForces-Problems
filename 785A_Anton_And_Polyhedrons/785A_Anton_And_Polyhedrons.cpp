#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    auto total = 0;
    for (auto i = 0; i != n; ++i) {
        string shape;
        cin >> shape;

        if (shape == "Tetrahedron")
            total += 4;
        else if (shape == "Cube")
            total += 6;
        else if (shape == "Octahedron")
            total += 8;
        else if (shape == "Dodecahedron")
            total += 12;
        else
            total += 20;
    }
    cout << total;
}