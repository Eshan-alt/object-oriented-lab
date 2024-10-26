#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int left, int right, int target) {
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
      return mid;
    if (arr[mid] < target)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return -1; 
}
int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target)
      return i;
  }
  return -1;
}

int main() {
  int arr[10];
  cout<< "Enter 10 elements in the array: ";
  for(int i = 0; i< 10; i++){
    cin>> arr[i];
  }

  int size = sizeof(arr) / sizeof(arr[0]);
  int target;
  cout<< "Enter the target element to find/search: ";
  cin>> target;

  int linearSearchIndex = linearSearch(arr, size, target);
  if (linearSearchIndex != -1)
    cout << "found at index " << linearSearchIndex << " using linear search." << endl;
  else
    cout << "Element not found" << endl;

  bubbleSort(arr, 10);
  int binarySearchIndex = binarySearch(arr, 0, size - 1, target);
  if (binarySearchIndex != -1)
    cout << "found at index " << binarySearchIndex << " using binary search." << endl;
  else
    cout << "Element not found " << endl;

  return 0;
}





#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student *students=new Student[3]; 
    students[0].name = "Bhavik";
    students[0].age = 19;
    students[1].name = "Eshan";
    students[1].age = 19;
    students[2].name = "Sahil";
    students[2].age = 18;
    for(int i = 0; i < 3; i++) {
        students[i].display();
    }
    return 0;
}








#include <iostream>
using namespace std;

int main() {
    string str = "Eshan";
    for (int i = 0; i < str.length(); i++) {
        cout << "str[" << i << "] = " << str[i] << endl;
    }

    cout << "\n";
    int arr[] = {1, 2, 6, 14, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    return 0;
}






















#include <iostream>
using namespace std;

int main() {
    string str = "Eshan";
    for (int i = 0; i < str.length(); i++) {
        cout << "str[" << i << "] = " << str[i] << endl;
    }

    cout << "\n";
    int arr[] = {1, 2, 6, 14, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    return 0;
}






























