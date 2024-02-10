#include <iostream>

using namespace std;

int main() {
    int x = 3, y = 2;

    x+=y;      // x = x + y = 3 + 2 = 5
    x-=y;      // x = x - y = 5 - 2 = 3
    x*=y;      // x = x * y = 3 * 2 = 6
    x/=y;      // x = x / y = 6 / 2 = 3
    x%=y;      // x = x % y = 3 % 2 = 1
    cout << x << endl;

    x+=2;      // x = x + 2 = 3
    x-=2;      // x = x - 2 = 1
    x*=2;      // x = x * 2 = 2
    x/=2;      // x = x / 2 = 1
    x%=2;      // x = x % 2 = 1
    cout << x << endl;

    return 0;
}