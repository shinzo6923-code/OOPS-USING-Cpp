#include <iostream>
using namespace std;

int main() {
    int num, temp, digits = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    temp = num;
    
    
    while (temp != 0) {
        temp = temp / 10;  
        digits++;          
    }
    
    cout << "Number of digits in " << num << " is " << digits << endl;
    
    return 0;
}
