// 1.)Create a base class PARENT.
// Create derived classe CHILD and through object of derived class access and set values of members of parent class.

#include <iostream>
using namespace std;

class PARENT {
public:
    int value;
    void setValue(int v) {
        value = v;
    }
    int getValue() {
        return value;
    }
};

class CHILD : public PARENT {
};

int main() {
    CHILD obj;
    obj.setValue(10); 
    cout << "Value set in PARENT class through CHILD class object: " << obj.getValue() << endl;
    return 0;
}