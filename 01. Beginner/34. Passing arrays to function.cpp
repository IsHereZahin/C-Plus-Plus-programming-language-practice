#include <iostream>

using namespace std;

// Function to display elements of an integer array
void displayarray(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";          // Print each element followed by a space
    }
    cout << endl;                       // Move to the next line after printing all elements
}

int main() {
    int number[5] = {1, 2, 3, 4, 5};    // Declare and initialize an integer array
    displayarray(number, 5);            // Call the displayarray function to print array elements
    return 0;
}
