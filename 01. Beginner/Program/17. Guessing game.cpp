#include <iostream>
#include <cstdlib> // Include cstdlib for rand and srand functions
#include <ctime>   // Include ctime for time function

using namespace std;

int main() {
    srand(time(NULL));              // Seed the random number generator

    int randomnumber, guessnumber;

    randomnumber = 1 + rand() % 10; // Generate the random number

    cout << "Enter a Guess number between 1 and 10: ";
    cin >> guessnumber;

    while (guessnumber != randomnumber) {
        if (guessnumber < randomnumber) {
            cout << "Your guess is too low." << endl;
        } else {
            cout << "Your guess is too high." << endl;
        }
        cout << "Enter a Guess number between 1 and 10: ";
        cin >> guessnumber;
    }
    cout << "Congrats! You got it!" << endl;
    return 0;
}
