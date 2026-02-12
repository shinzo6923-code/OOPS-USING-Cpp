#include <iostream>
using namespace std;

int main() {
    int a, b, i, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (i = (a > b ? a : b); ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;

    return 0;
}
