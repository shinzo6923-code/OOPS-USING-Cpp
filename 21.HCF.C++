#include <iostream>
using namespace std;

int main() {
    int a, b, i, hcf = 1;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Loop until both limits are reached
    for (i = 1; i <= a || i <= b; i++) {
        if (i <= a && i <= b) {   // ensure i does not exceed either number
            if (a % i == 0 && b % i == 0) {
                hcf = i;
            }
        }
    }

    cout << "HCF of " << a << " and " << b << " is " << hcf << endl;

    return 0;
}
