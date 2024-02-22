#include <iostream>

using namespace std;

void addition() {
    int result = 5 + 5;
    cout << "Total = " << result << endl;
}
// Function to calculate and display the square of a number
void square(int x) {
    int result = x * x; // Calculate the square of x
    cout << "Square of " << x << " = "<< result << endl; // Display the result
}

int main() {
    // Call the addition function
    addition();
    // Call the square function with different values
    square(5);  // Square of 5
    square(10); // Square of 10
    square(15); // Square of 15
    return 0;
}