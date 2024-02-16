
#include <iostream>

using namespace std;

int main() {
    // Example of break
    cout << "Example of break:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            cout << "Breaking loop." << endl;
            break;
        }
        cout << i << endl;
    }

    // Example of continue
    cout << endl << "Example of continue:" << endl;
    for (int j = 1; j <= 10; j++) {
        if (j == 5) {
            cout << "Skipping 5." << endl;
            continue;
        }
        cout << j << endl;
    }
}