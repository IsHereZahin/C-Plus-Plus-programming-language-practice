#include <iostream>
#include <iomanip>                                  // for std::showpoint, std::setprecision, and std::setw

using namespace std;

int main() {

    float num1, num2;                               // using floating-point variables instead of integers
    
    // Prompt user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Manipulators for floating-point formatting
    cout << showpoint;                              // Ensure decimal point and trailing zeros are shown
    cout << noshowpoint;                            // Clear the showpoint flag
    cout << fixed;                                  // Set fixed-point notation for floating-point numbers
    cout << setprecision(6);                        // Set precision to 6 digits after the decimal point

    // Output results with setw() for formatting
    cout << setw(25) << "Summation is: "     << num1 + num2 << endl;
    cout << setw(25) << "Subtraction is: "   << num1 - num2 << endl;
    cout << setw(25) << "Multiplication is: "<< num1 * num2 << endl;
    cout << setw(25) << "Division is: "      << num1 / num2 << endl;

    // Inform about remainder (not applicable for floating-point numbers)
    cout << "Remainder is not applicable for floating-point numbers" << endl;

    return 0;
}
