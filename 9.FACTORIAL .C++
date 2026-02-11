#include <iostream>
using namespace std;

int main() {
    int x;
    long long factorial = 1; // Use long long for bigger numbers

    cout << "Enter a number: ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << x << " is " << factorial << endl;

    return 0;
}
