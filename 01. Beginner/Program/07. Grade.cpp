#include <iostream>

using namespace std;

int main() {
    float marks;

    cout << "Enter your marks: ";
    cin >> marks;

    // Check if marks are invalid (less than 0 or greater than 100)
    if (marks > 100 || marks < 0) {
        cout << "Invalid marks: " << marks << endl;
        cout << "Enter a valid mark in the range 0 - 100" << endl;
    } 
    // Check for various grade ranges
    else if (marks >= 80) {
        cout << "You got an A+" << endl;
    } else if (marks >= 70) {
        cout << "You got an A" << endl;
    } else if (marks >= 60) {
        cout << "You got an A-" << endl;
    } else if (marks >= 50) {
        cout << "You got a B" << endl;
    } else if (marks >= 40) {
        cout << "You got a C" << endl;
    } else if (marks < 40) {
        cout << "You got a F" << endl;
    } else {
        cout << "Program failed" << endl;
    }

    return 0;
}
