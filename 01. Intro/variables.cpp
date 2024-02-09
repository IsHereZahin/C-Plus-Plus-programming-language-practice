#include <iostream>
#include <string> // Include string header for using string type

using namespace std;

int main() {
    // Variables Declaration
    int     num1, num2;
    float   x;
    double  y;
    char    ch;
    string  prefix; // Use string type for storing multiple characters

    // Variables Initialization
    num1 = 10;
    num2 = 20;
    x    = 10.5;
    y    = 20.4555;
    ch   = 'A';         // Single character
    prefix = "Total: "; // Assigning multiple characters to string

    cout << "Character print " << ch << endl;
    cout << prefix << num1 + num2 << endl;
    cout << prefix << x + y << endl;

    return 0; // Return 0 to indicate successful completion
}
