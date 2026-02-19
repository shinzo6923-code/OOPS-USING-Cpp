#include <iostream>
using namespace std;

int main() {
    int x, y;
    int n = 10;

    x = n++;   // Post-increment: x = 10, then n becomes 11
    y = ++n;   // Pre-increment: n becomes 12, then y = 12

    cout << "x = " << x << "\ny = " << y << endl;

    return 0;
}
