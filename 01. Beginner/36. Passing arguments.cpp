#include <iostream>

using namespace std;

// Function to modify the value of an integer through a pointer
void display(int *num) {
    *num = 20; // Modifying the value pointed to by num to 20
}

int main() {
    int x = 10;
    cout << "Before calling the function X: " << x << endl;

    // Passing the address of x to the display function
    display(&x);

    cout << "After calling the function X: " << x << endl;
}
