/*Create a class rectangle having variables length and breadth. Create a default constructor that assigns initial values 1.00 and 1.00.
1 parameterized constructor that assigns values based on the parameters passed.
b)Define a + operator to add lengths and breadths of two rectangle objects to create a new rectangle using operator overloading.
c) Create two programs both named add both of which calculate sum of areas of two
rectangle objects,
- 1st one takes integer values and returns area in data type int
- 2nd one takes float parameters and returns float*/ 

#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float breadth;

    Rectangle() : length(1.00), breadth(1.00) {}

    Rectangle(float l, float b) : length(l), breadth(b) {}
  
    Rectangle operator+(const Rectangle &rect) {
        return Rectangle(this->length + rect.length, this->breadth + rect.breadth);
    }

    float area() const {
        return length * breadth;
    }
};

int add(int l1, int b1, int l2, int b2) {
    Rectangle rect1(l1, b1);
    Rectangle rect2(l2, b2);
    return int(rect1.area() + rect2.area());
}

float add(float l1, float b1, float l2, float b2) {
    Rectangle rect1(l1, b1);
    Rectangle rect2(l2, b2);
    return rect1.area() + rect2.area();
}

int main() {
    float l1, b1, l2, b2;
    cout << "Enter length and breadth of first rectangle: ";
    cin >> l1 >> b1;
    cout << "Enter length and breadth of second rectangle: ";
    cin >> l2 >> b2;

    Rectangle rect1(l1, b1);
    Rectangle rect2(l2, b2);

    Rectangle rect3 = rect1 + rect2;
    cout << "Combined Rectangle: Length = " << rect3.length << ", Breadth = " << rect3.breadth << endl;

    int intAreaSum = add(int(l1), int(b1), int(l2), int(b2));
    cout << "Sum of areas (int): " << intAreaSum << endl;

    float floatAreaSum = add(l1, b1, l2, b2);
    cout << "Sum of areas (float): " << floatAreaSum << endl;

    return 0;
}