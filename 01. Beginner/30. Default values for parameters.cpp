#include <iostream>

using namespace std;

// Function to display values, with default parameters a=5 and b=10
void display(int a = 5, int b = 10) {
    cout << a << "  " << b << endl;
}

int main() {
    // Calling display() without arguments, will use default values for a and b
    display();
    
    // Calling display() with one argument, will use default value for b
    display(0);
    
    // Calling display() with both arguments specified
    display(0, 0);
    
    return 0;
} 
// End of program
