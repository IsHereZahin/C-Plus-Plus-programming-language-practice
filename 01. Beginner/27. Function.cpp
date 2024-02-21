#include <iostream>

using namespace std;

// Function to perform addition
int addition(int a, int b) {
    int sum = a + b;

    // Print the addition result
    cout << "The addition is: ";
    cout << sum << endl;

    return 0;
}

int main() {
    // Call addition with arguments 1 and 2
    addition(1, 2);

    // Call addition with arguments 1 and 3
    addition(1, 3);

    // Call addition with arguments 2 and 3
    addition(2, 3);

    return 0;
}