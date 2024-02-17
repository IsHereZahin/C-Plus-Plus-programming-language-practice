#include <iostream>

using namespace std;

int main() {
    int marks[5];

    // Input
    for (int i = 0; i < 5; i++) {
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Output
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " has " << marks[i] << " marks." << endl;
    }
    return 0;
}