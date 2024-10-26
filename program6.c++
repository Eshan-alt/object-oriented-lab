#include <iostream>
using namespace std;

class s2; 

class s1 {
private:
    int l1;

public:
    s1(int val) : l1(val) {}

    friend class s2;    
    friend void compareFriend(s1& obj1, s2& obj2);
};

class s2 {
private:
    int l2;

public:
    s2(int val) : l2(val) {}

    
    void compare(s1& obj1) {
        if (obj1.l1 > l2)
            cout << "l1 (" << obj1.l1 << ") is greater than l2 (" << l2 << ")." << endl;
        else if (l2 > obj1.l1)
            cout << "l2 (" << l2 << ") is greater than l1 (" << obj1.l1 << ")." << endl;
        else
            cout << "l1 (" << obj1.l1 << ") and l2 (" << l2 << ") are equal." << endl;
    }

    
    friend void compareFriend(s1& obj1, s2& obj2);
};


void compareFriend(s1& obj1, s2& obj2) {
    if (obj1.l1 > obj2.l2)
        cout << "[Friend Function] l1 (" << obj1.l1 << ") is greater than l2 (" << obj2.l2 << ")." << endl;
    else if (obj2.l2 > obj1.l1)
        cout << "[Friend Function] l2 (" << obj2.l2 << ") is greater than l1 (" << obj1.l1 << ")." << endl;
    else
        cout << "[Friend Function] l1 (" << obj1.l1 << ") and l2 (" << obj2.l2 << ") are equal." << endl;
}

int main() {
    s1 obj1(10); 
    s2 obj2(20);  

    
    obj2.compare(obj1);

    
    compareFriend(obj1, obj2);

    return 0;
}