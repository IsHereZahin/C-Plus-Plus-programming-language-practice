#include <iostream>

using namespace std;

int main() {
    int array1[5] = {1, 2, 3, 4, 5}, array2[5], i;

    cout << "Array 1 elements: ";
    for (int i = 0; i < 5; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    // Copying arrays from one file to another
    for (i = 0; i < 5; i++) {
        array2[i] = array1[i];
    }
    
    cout << "Array 2 elements: ";
    for (int i = 0; i < 5; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
    
    return 0;
}
