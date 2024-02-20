#include <iostream>

int main() {
    int num = 10;
    int *ptr = &num; // Declaring a pointer and assigning the address of 'num' to it

    std::cout << "Value of num: "   << num  << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of ptr: "   << ptr  << std::endl;           // This will print the address of 'num'
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;  // Dereferencing the pointer to get the value it points to

    // Changing the value of 'num' using the pointer
    *ptr = 20;

    std::cout << "Value of num after changing through pointer: " << num << std::endl;

    return 0;
}
