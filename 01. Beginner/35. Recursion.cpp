#include <iostream>

using namespace std;

// Function to calculate factorial recursively
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate factorial of n
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    return 0;
}
