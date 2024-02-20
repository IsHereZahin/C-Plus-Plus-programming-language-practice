#include <iostream>

using namespace std;

int main() {
    int num[]     = {0,1,2,3,4,5,6};
    int value;
    int position  = -1;
    
    cout << "Enter a number: ";
    cin >> value;

    for (int i = 0; i < 7; i++) {
        if (value == num[i]) {
            position = i;
            break;
        }
    }
    
    if (position == -1) {
        cout << "Value not found" << endl;
    } else {
        cout << "Value found at position: " << position << endl;
    }
    
    return 0;
}
