#include <iostream>

using namespace std;

int Summation(int a, int b) {
    int sum = a + b;

    // Print the addition result
    cout << "The addition is: ";
    cout << sum << endl;

    return 0;
}

int Subtraction(int a, int b) {
    int sub = a - b;

    // Print the subtraction result
    cout << "The subtraction is: ";
    cout << sub << endl;
    return 0;
}

int Multiplication(int a, int b) {
    int mul = a * b;

    // Print the multiplication result
    cout << "The multiplication is: ";
    cout << mul << endl;
    return 0;
}

int Divide(int a, int b) {
    int div = a / b;

    // Print the division result
    cout << "The division is: ";
    cout << div << endl;
    return 0;
}

int Modulus(int a, int b) {
    int mod = a % b;

    // Print the modulus result
    cout << "The modulus is: ";
    cout << mod << endl;
    return 0;
}

int main() {
    Summation(10, 20);

    Subtraction(10, 20);
    
    Multiplication(10, 20);

    Divide(10, 20);

    Modulus(10, 20);

    return 0;
}
