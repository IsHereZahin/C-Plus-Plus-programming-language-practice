#include <iostream>
using namespace std;

int main() {
    // If-else statement
    int x = 10;

    if (x > 5) {
        cout << "x is greater than 5" << endl;
    } else {
        cout << "x is not greater than 5" << endl;
    }

    // Switch statement
    char grade = 'B';
    switch(grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "You passed!" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    // While loop
    int i = 0;
    cout << "While loop: ";
    while (i < 5) {
        cout << i << " ";           // Prints the value of i
        i++;                        // Increments the value of i
    }
    cout << endl;

    // Do-while loop
    int j = 0;
    cout << "Do-while loop: ";
    do {
        cout << j << " ";           // Prints the value of j
        j++;                        // Increments the value of j
    } while (j < 5);
    cout << endl;

    // For loop
    cout << "For loop: ";
    for (int k = 0; k < 5; k++) {
        cout << k << " ";           // Prints the value of k
    }
    cout << endl;

    // Break statement
    cout << "Break statement: ";
    for (int m = 0; m < 10; m++) {
        if (m == 5)
            break;                  // Breaks out of the loop if m equals 5
        cout << m << " ";           // Prints the value of m
    }
    cout << endl;

    // Continue statement
    cout << "Continue statement: ";
    for (int n = 0; n < 10; n++) {
        if (n == 5)
            continue;               // Skips the rest of the loop body if n equals 5
        cout << n << " ";           // Prints the value of n
    }
    cout << endl;

    return 0;
}
