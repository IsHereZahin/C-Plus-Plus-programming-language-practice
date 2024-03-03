#include <iostream>

using namespace std;

int x = 21; // Global variable

int main() {
    int x = 10;                             // Local variable
    ::x = 20;                               // Using scope resolution operator to modify global x

    cout << "Local value: " << x << endl;   // Accessing local x
    cout << "Scope global value: " << ::x << endl; // Accessing global x using ::
    return 0;
}
