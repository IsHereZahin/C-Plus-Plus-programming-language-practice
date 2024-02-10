#include <iostream>

using namespace std;

int main() {
    // Prompt user to enter base and height of the triangle
    cout << "Calculating area of triangle" << endl;
    double base, height, area;

    // Input base of the triangle
    cout << "Enter base: ";
    cin >> base;

    // Input height of the triangle
    cout << "Enter height: ";
    cin >> height;

    // Calculate the area of the triangle using the formula: area = 0.5 * base * height
    area = 0.5 * base * height; // Using direct calculation


    // area = 1/2 * base * height;           // Worng
    // area = (double)1/2 * (base * height); // Correct
    // area = (base * height) / 2;           // Correct

    // Output the calculated area of the triangle
    cout << "Your triangle area is: " << area << endl;

    return 0;
}

