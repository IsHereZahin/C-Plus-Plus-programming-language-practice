#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to lowercase to simplify the checks
    ch = tolower(ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "The character '" << ch << "' is a vowel." << endl;
    } 
    // Check if the character is a letter
    else if ((ch >= 'a' && ch <= 'z')) {
        cout << "The character '" << ch << "' is a consonant." << endl;
    } 
    // If the character is not a letter
    else {
        cout << "The character '" << ch << "' is not a letter." << endl;
    }

    return 0;
}
