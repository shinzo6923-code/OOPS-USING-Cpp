#include <iostream>
using namespace std;

// Base class
class A {
public:
    void show() {
        cout << "This is base class A" << endl;
    }
};

// Derived class B
class B : public A {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};

// Derived class C
class C : public A {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};

// Derived class D
class D : public A {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    B obj1;
    C obj2;
    D obj3;

    obj1.show();   // from A
    obj1.displayB();

    obj2.show();   // from A
    obj2.displayC();

    obj3.show();   // from A
    obj3.displayD();

    return 0;
}