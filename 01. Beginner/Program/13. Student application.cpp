#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int n, sum = 0;

    // Prompt the user to enter the number of students
    cout << "Enter the number of students: ";
    cin >> n;

    // Declare an array to store marks of students
    int students[n];

    // Input marks for each student
    for (int i = 0; i < n; i++) {
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> students[i];
    }

    // Calculate total marks
    for (int i = 0; i < n; i++) {
        sum += students[i];
    }
    cout << "Total marks: " << sum << endl;

    // Calculate and display the average marks
    cout << "The average marks is: " << (float) sum / n << endl;

    // Find the maximum and minimum marks
    int max = students[0];
    int min = students[0];
    for (int i = 0; i < n; i++) {
        if (students[i] > max) {
            max = students[i];
        }
        if (students[i] < min) {
            min = students[i];
        }
    }
    cout << "Maximum marks: " << max << endl;
    cout << "Minimum marks: " << min << endl;

    return 0;
}
