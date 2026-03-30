#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

// Base class B
class B {
public:
    void showB() {
        cout << "This is class B" << endl;
    }
};

// Derived class C
class C : public A, public B {
public:
    void showC() {
        cout << "This is class C" << endl;
    }
};

int main() {
    C obj;

    obj.showA(); // from A
    obj.showB(); // from B
    obj.showC(); // from C

    return 0;
}