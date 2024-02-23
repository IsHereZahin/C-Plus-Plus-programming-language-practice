#include <iostream>
#include <stdlib.h>            // Include cstdlib for srand and rand functions

using namespace std;

int main() {
    for (int i = 1; i < 5; i++)
    {
        int randomnumber = rand() %5 + 1;
        cout << "Random number = " << randomnumber << endl; 
    }
    
}