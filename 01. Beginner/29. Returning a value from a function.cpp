#include <iostream>

using namespace std;

// function prototype for addition
double addition(double, double);

// main function
int main() {
    cout << addition(10.7, 10.5);
    return 0;
}

// function definition for addition
double addition(double a, double b) {
    double sum = a + b;
    return sum; 
}
