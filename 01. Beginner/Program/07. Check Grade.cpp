#include <iostream>
#include <limits> // Needed for numeric_limits

using namespace std;

int main() {
    float marks;

    cout << "Enter your marks: ";

    // Check if input operation was successful
    if (!(cin >> marks)) {
        cout << "Invalid input! Please enter a numeric value." << endl;
        // Clear the input buffer
        cin.clear();
        // Ignore any remaining characters in the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // Exit the program
        return 1;
    }

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
        cout << "You got an B" << endl;
    } else if (marks >= 40) {
        cout << "You got an C" << endl;
    } else {
        cout << "You got an F" << endl;
    }

    return 0;
}
