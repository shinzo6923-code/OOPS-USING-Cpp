#include <iostream>
using namespace std;

// Base class
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

// Derived class B
class B : virtual public A {
};

// Derived class C
class C : virtual public A {
};

// Derived class D
class D : public B, public C {
};

int main() {
    D obj;
    obj.show();  // no ambiguity
    return 0;
}