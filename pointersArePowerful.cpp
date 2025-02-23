#include <iostream>

int main() {
    int a = 10;  // Declare an integer variable
    int* p = &a; // Declare a pointer and assign the address of a

    // Print the address stored in p and the value of a using p
    std::cout << "Address stored in p: " << p << std::endl;
    std::cout << "Value of a using p: " << *p << std::endl;

    // Change the value of a using p
    *p = 20;

    // Print the new value of a
    std::cout << "New value of a: " << a << std::endl;

    return 0;
}
