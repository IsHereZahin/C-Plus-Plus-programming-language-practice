#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    // Equal to operator (==)
    cout << "a == b: " << (a == b) << endl;  // Output: 0 (false)
    
    // Not equal to operator (!=)
    cout << "a != b: " << (a != b) << endl;  // Output: 1 (true)
    
    // Less than operator (<)
    cout << "a <  b: " << (a < b) << endl;    // Output: 1 (true)
    
    // Greater than operator (>)
    cout << "a >  b: " << (a > b) << endl;    // Output: 0 (false)
    
    // Less than or equal to operator (<=)
    cout << "a <= b: " << (a <= b) << endl;  // Output: 1 (true)
    
    // Greater than or equal to operator (>=)
    cout << "a >= b: " << (a >= b) << endl;  // Output: 0 (false)

    return 0;
}



//          ==  (equal to)
//          !=  (not equal to)
//          <   (less than)
//          >   (greater than)
//          <=  (less than or equal to)
//          >=  (greater than or equal to)