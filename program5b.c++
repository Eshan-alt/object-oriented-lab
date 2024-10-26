// 2.)Create a class P having a public integer publ a private integer priva a protected integer prote

// Create a public derived class A, protected derived class B, private derived class C all derived from P.
// Show if each class A,B,C inherit the three variables from  P and also show their access specifiers inside the derived class.
#include <iostream>
using namespace std;

class P {
public:
    int publ;
private:
    int priva;
protected:
    int prote;
};

class A : public P {
public:
    void show() {
        publ = 10;  
        prote = 20; 
        cout << "A - publ: " << publ << ", prote: " << prote << endl;
    }
};

class B : protected P {
public:
    void show() {
        publ = 30;  
        prote = 40; 
        cout << "B - publ: " << publ << ", prote: " << prote << endl;
    }
};

class C : private P {
public:
    void show() {
        publ = 50;  
        prote = 60; 
        cout << "C - publ: " << publ << ", prote: " << prote << endl;
    }
};

int main() {
    A objA;
    objA.show();

    B objB;
    objB.show();

    C objC;
    objC.show();

    return 0;
}