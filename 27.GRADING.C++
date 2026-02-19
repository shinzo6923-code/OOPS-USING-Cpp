#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter an alphabet: ";
    cin >> grade;

    if (grade == 'A') {
        cout << "Excellent";
    }
    else if (grade == 'B') {
        cout << "Very Good";
    }
    else if (grade == 'C') {
        cout << "Good";
    }
    else {
        cout << "Incorrect input";
    }

    cout << "\nThis is your result" << endl;

    return 0;
}
