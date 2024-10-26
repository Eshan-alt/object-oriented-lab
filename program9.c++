#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Q1: Division with Exception Handling
double divide(int a, int b) {
    if (b == 0) {
        if (a == 0) {
            throw runtime_error("0/0 is not defined");
        } else {
            throw runtime_error("Division by zero");
        }
    }
    return static_cast<double>(a) / b;
}

void testDivision() {
    try {
        cout << "1/0: " << divide(1, 0) << endl;
    } catch (const runtime_error& e) {
        cout << "Exception: " << e.what() << endl;
    }

    try {
        cout << "0/0: " << divide(0, 0) << endl;
    } catch (const runtime_error& e) {
        cout << "Exception: " << e.what() << endl;
    }
}

// Q2: Vector Operations
void vectorOperations() {
    // 2.1: Create four vectors
    vector<int> a = {1, 0, 3, 4, 5}; 
    vector<int> b(5);
    vector<int> c(5, 0); 
    vector<int> d = c; 

    // 2.2: Insert value 5 at the end of vector c and then remove 2 values from the end
    c.push_back(5);
    c.pop_back();
    c.pop_back();

    // Display vectors
    cout << "Vector a: ";
    for (int val : a) cout << val << " ";
    cout << endl;

    cout << "Vector b: ";
    for (int val : b) cout << val << " ";
    cout << endl;

    cout << "Vector c: ";
    for (int val : c) cout << val << " ";
    cout << endl;

    cout << "Vector d: ";
    for (int val : d) cout << val << " ";
    cout << endl;
}

int main() {

    testDivision();
    vectorOperations();

    return 0;
}