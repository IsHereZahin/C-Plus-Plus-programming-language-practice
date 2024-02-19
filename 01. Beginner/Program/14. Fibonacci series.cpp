#include <iostream>
using namespace std;

int main() {
    int a[30], n, i;

    // Ask the user how many Fibonacci numbers to generate
    cout << "How many Fibonacci numbers: ";
    cin >> n;

    // Initialize the first two elements of the array with the Fibonacci sequence starting values
    a[0] = 0;
    a[1] = 1;

    // Generate Fibonacci numbers and store them in the array
    for (i = 2; i < n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    // Print the generated Fibonacci sequence
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
