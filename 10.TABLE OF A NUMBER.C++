#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    for (int i = 1; i <= 10; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }

    return 0;
}
