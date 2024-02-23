#include <iostream>

using namespace std;

void sum(int x, int y)
{
    int total = x + y;
    cout << "Total = " << total << endl;
}

void sum(double x, double y)
{
    double total = x + y;
    cout << "Total = " << total << endl;
}
void sum(int x, int y, int z)
{
    int total = x + y + z;
    cout << "Total = " << total << endl;
}

int main() {
    sum(1,3);
    sum(1.66,3.0);
    sum(1,3,5);
    return 0;
}