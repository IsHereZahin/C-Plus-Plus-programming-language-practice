#include <iostream>

using namespace std;

int main() {
    // Declare variables to store three numbers
    float num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers:";

    // Read the three numbers from the user input
    cin >> num1 >> num2 >> num3;

    // Check if all three numbers are equal
    if (num1 == num2 && num2 == num3) {
        cout << "All three numbers are equal." << endl;
    } else {
        // Check which number is the smallest
        if (num1 < num2 && num1 < num3) {                               // If num1 is the smallest
            cout << num1 << " is the smallest number." << endl;
        } else if (num2 < num1 && num2 < num3) {                        // If num2 is the smallest
            cout << num2 << " is the smallest number." << endl;
        } else if (num3 < num1 && num3 < num2) {                        // If num3 is the smallest
            cout << num3 << " is the smallest number." << endl;
        } else {                                                        // If two numbers are the same
            cout << "Here two numbers are same and smallest" << endl;
        }

        // Check which number is the biggest
        if (num1 > num2 && num1 > num3) {                               // If num1 is the biggest
            cout << num1 << " is the biggest number." << endl;
        } else if (num2 > num1 && num2 > num3) {                        // If num2 is the biggest
            cout << num2 << " is the biggest number." << endl;
        } else if (num3 > num1 && num3 > num2) {                        // If num3 is the biggest
            cout << num3 << " is the biggest number." << endl;
        } else {                                                        // If two numbers are the same
            cout << "Here two numbers are same and biggest" << endl;
        }
    }

    // Exit the program
    return 0;
}