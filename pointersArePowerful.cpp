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

    // Declare an array of integers
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Pointer to the first element of the array

    // Print the address of each element in the array using pointer arithmetic
    std::cout << "\nAddresses of array elements:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Address of arr[" << i << "]: " << (ptr + i) << std::endl;
    }

    // Traverse the array using pointer and print each value
    std::cout << "\nValues in array using pointer traversal:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Value at arr[" << i << "]: " << *(ptr + i) << std::endl;
    }

    return 0;
}
