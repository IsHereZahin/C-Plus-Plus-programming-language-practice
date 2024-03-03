#include <iostream>

using namespace std;

int x = 21;

void display() {
    cout << "Incide the display function: " << x << endl;
}
int main() {
    cout << "Inside the main function: " << x << endl;
    display();
    return 0;
}