#include <iostream>
using namespace std;

int main()
{
    int x, y;
    double average;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    average = (x + y) / 2.0;   

    cout << "The average is " << average;

    return 0;
}
