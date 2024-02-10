#include <iostream>

using namespace std;

int main() {
    // Declare variables to store temperature in Fahrenheit and Celsius
    double fahrenheit, celsius;

    // Prompt the user to enter temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";

    // Read the temperature from user input
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius using the conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output the temperature in Celsius
    cout << "Temperature in Celsius: " << celsius << endl;
    
    // Indicate successful completion of the program
    return 0;
}
