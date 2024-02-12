#include <iostream>
using namespace std;

int main() {
    int     a;              // Integer data type, typically representing whole numbers.
    float   b;              // Single-precision floating-point data type.
    double  c;              // Double-precision floating-point data type.
    char    d;              // Character data type, representing individual characters.
    bool    e;              // Boolean data type, representing true or false values.
    char    name[20];       // Array of characters, representing a string of up to 19 characters (plus null-terminator).

    // sizeof operator
    cout << "Size of int: "     << sizeof(a) << " bytes" << endl;
    cout << "Size of float: "   << sizeof(b) << " bytes" << endl;
    cout << "Size of double: "  << sizeof(c) << " bytes" << endl;
    cout << "Size of char: "    << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: "    << sizeof(e) << " bytes" << endl;
    cout << "Size of name array: " << sizeof(name) << " bytes" << endl;

    // comma operator
    int x, y, sum;                       // Declaration of integer variables x, y, and sum.
    sum = (x = 10, y = 20, sum = x + y); // The comma operator allows multiple expressions to be evaluated in a single statement.
    cout << sum << endl;                 // Output the value of sum, which should be 30.

    return 0;
}
