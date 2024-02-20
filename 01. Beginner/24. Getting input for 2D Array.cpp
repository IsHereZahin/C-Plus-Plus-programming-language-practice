#include <iostream>

using namespace std;

int main() {
    int A[3][4];

    // Initialize
    cout << "Enter the elements of Matrix" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << "Enter the number of A[" << row << "][" << col << "]: ";
            cin >> A[row][col];
        }
    }

    // Printing
    cout << "2D Array Print:" << endl;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << " " << A[row][col];
        }
        cout << endl;
    }
    
    return 0;
}
