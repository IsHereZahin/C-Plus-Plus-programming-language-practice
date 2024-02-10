#include <iostream>

using namespace std;

int main() {

    // A, a                 ----> Operands
    // +, -, *, /, %,       ----> Operator
    // 1, 2, 3, 4, 5, 6, 7  ----> Constant

    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Summation is: "     << num1 + num2 << endl;

    cout << "Subtraction is: "   << num1 - num2 << endl;

    cout << "Multiplication is: "<< num1 * num2 << endl;

    cout << "Division is: "      << (float) num1 / num2 << endl;   //Type casting (int -> float)

    cout << "Remainder is: "     << num1 % num2 << endl;
    return 0;
}