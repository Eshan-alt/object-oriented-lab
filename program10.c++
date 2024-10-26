// Create a set and an unordered set and insert values 1,2,4,3,6,2. Iterate through both and print their contents.
// a) Create an unordered map "record" to store names of students and their roll numbers.
// b) Then insert records of 3 students in the map.
// c) Perform search to retrieve the roll number of one of the students.
#include <iostream>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // Part 1: Set and Unordered Set
    set<int> orderedSet = {1, 2, 4, 3, 6, 2};
    unordered_set<int> unorderedSet = {1, 2, 4, 3, 6, 2};

    cout << "Ordered Set contents: ";
    for (const int& val : orderedSet) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Unordered Set contents: ";
    for (const int& val : unorderedSet) {
        cout << val << " ";
    }
    cout << endl;

    // Part 2: Unordered Map
    unordered_map<string, int> record;
    record["Eshan"] = 101;
    record["Hardik"] = 102;
    record["Anmol   "] = 103;

    // Search for a student's roll number
    string searchName = "Bob";
    if (record.find(searchName) != record.end()) {
        cout << "Roll number of " << searchName << " is " << record[searchName] << endl;
    } else {
        cout << searchName << " not found in the record." << endl;
    }

    return 0;
}