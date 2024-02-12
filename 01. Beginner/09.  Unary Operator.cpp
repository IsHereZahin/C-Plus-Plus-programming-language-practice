#include <iostream>

using namespace std;

int main() {
    int x = 1;              // Initialize x with value 1
    int y = -x;             // Unary negation operator, assigns -1 to y
    int z = +x;             // Unary positive operator, assigns 1 to z

    cout << x << endl;      // Output the value of x (1)
    cout << y << endl;      // Output the value of y (-1)
    cout << z << endl;      // Output the value of z (1)

    // Increment operators
    int a = x++;            // Assign the value of x to a, then increment x
    cout << a << endl;      // Output the value of a (1)
    cout << x << endl;      // Output the value of x (2)

    int b = ++x;            // Increment x, then assign the value of x to b
    cout << b << endl;      // Output the value of b (3)
    cout << x << endl;      // Output the value of x (3)

    // Decrement operators
    int c = x--;            // Assign the value of x to c, then decrement x
    cout << c << endl;      // Output the value of c (3)
    cout << x << endl;      // Output the value of x (2)

    int d = --x;            // Decrement x, then assign the value of x to d
    cout << d << endl;      // Output the value of d (1)
    cout << x << endl;      // Output the value of x (1)

    return 0;
}
