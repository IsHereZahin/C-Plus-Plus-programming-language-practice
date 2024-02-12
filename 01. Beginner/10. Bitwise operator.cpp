#include <iostream>
#include <iomanip> // Include the <iomanip> header for setw()

using namespace std;

int main() {

    // Bitwise AND (&) Operator
    // Sets each bit to 1 if both bits are 1, otherwise sets it to 0
    int x = 5;                              // Binary: 0101
    int y = 3;                              // Binary: 0011
    int result_and = x & y;                 // Binary: 0001 (1 in decimal)
    cout << setw(20) << "Bitwise AND result: " << result_and << endl;

    // Bitwise OR (|) Operator
    // Sets each bit to 1 if at least one bit is 1
    int result_or = x | y;                  // Binary: 0111 (7 in decimal)
    cout << setw(20) << "Bitwise OR result: " << result_or << endl;

    // Bitwise XOR (^) Operator
    // Sets each bit to 1 if only one of the bits is 1
    int result_xor = x ^ y;                 // Binary: 0110 (6 in decimal)
    cout << setw(20) << "Bitwise XOR result: " << result_xor << endl;

    // Bitwise NOT (~) Operator
    // Flips all the bits
    int z = 5;                              // Binary: 0000 0101
    int result_not = ~z;                    // Binary: 1111 1010 (-6 in decimal)
    cout << setw(20) << "Bitwise NOT result: " << result_not << endl;

    // Left Shift (<<) Operator
    // Shifts the bits to the left by the specified number of positions
    int num = 3;                            // Binary: 0011
    int result_left_shift = num << 2;       // Binary: 1100 (12 in decimal)
    cout << setw(20) << "Left Shift result: " << result_left_shift << endl;

    // Right Shift (>>) Operator
    // Shifts the bits to the right by the specified number of positions
    int num2 = 12;                          // Binary: 1100
    int result_right_shift = num2 >> 2;     // Binary: 0011 (3 in decimal)
    cout << setw(20) << "Right Shift result: " << result_right_shift << endl;

    return 0;
}
