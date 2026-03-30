#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

// Derived class B
class B : public A {
public:
    void showB() {
        cout << "This is class B" << endl;
    }
};

// Derived class C
class C : public B {
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