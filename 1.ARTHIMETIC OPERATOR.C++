
#include <iostream>
using namespace std;
int main()
{
    int x, y, add = 0,sub,multiply;

    cout << "Enter the value of x and y: " << endl;
    cin >> x >> y;

    add = x + y;
      sub=x-y;
      multiply=x*y;
    cout << "The sum is: " << add << endl;
    cout << "The difference is: " << sub << endl;
    cout << "The product is: " << multiply << endl;

    return 0;
}
