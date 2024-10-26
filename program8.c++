#include <iostream>
using namespace std;

class PARENT {
protected:
    PARENT() {
        cout << "PARENT class constructor " << endl;
    }
    ~PARENT() {
        cout << "PARENT class destructor " << endl;
    }
};

class CHILD : public PARENT {
public:
    CHILD() {
        cout << "CHILD class constructor " << endl;
    }
    ~CHILD() {
        cout << "CHILD class destructor " << endl;
    }
};

int main() {
    
    CHILD d;
   
    return 0;
}