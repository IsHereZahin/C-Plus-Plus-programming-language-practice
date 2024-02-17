#include <iostream>

using namespace std;

int main() {
    // Declare an array of integers with 5 elements
    int num[5] = {1, 2, 3, 4, 5};

    // Access and print individual elements of the array
    cout << "Elements of the array: ";
    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
