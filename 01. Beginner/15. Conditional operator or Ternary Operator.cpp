#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;
    
    string message = (age >= 18) ? "You are an adult." : "You are a minor.";
    std::cout << message << std::endl;
}