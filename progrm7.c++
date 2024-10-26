#include <iostream>
using namespace std;

// Template function to find the maximum element in an array
template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Template class for a rectangle
template <typename T>
class Rectangle {
private:
    T length;
    T width;
public:
    Rectangle(T l, T w) : length(l), width(w) {}

    T area() const {
        return length * width;
    }

    T perimeter() const {
        return 2 * (length + width);
    }

    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

int main() {
    // Test the template function with different types of arrays
    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Maximum in integer array: " << findMax(intArr, 5) << endl;
    cout << "Maximum in float array: " << findMax(floatArr, 5) << endl;
    cout << "Maximum in character array: " << findMax(charArr, 5) << endl;

    Rectangle<int> intRect(3, 4);
    Rectangle<float> floatRect(3.5, 4.5);

    cout << "\nRectangle with integer values:" << endl;
    intRect.display();

    cout << "\nRectangle with float values:" << endl;
    floatRect.display();

    return 0;
}