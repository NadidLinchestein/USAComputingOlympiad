/*
    Pointers in C++

    A pointer is a variable that stores the memory address of another variable.
    Pointers are powerful in C++ because they allow direct access to memory and can 
    be used for dynamic memory management, function arguments, and more.

    Declaration:
      - The syntax for declaring a pointer is:
        `type* pointerName;`
      - `type` is the data type of the variable the pointer will point to.

    Let's look at an example with pointers.
*/


#include <iostream>
using namespace std;

int main() {
    int number = 25;            // Regular integer variable
    int* ptr = &number;         // Declare a pointer and store the address of 'number'

    // Output the value of 'number' using both the variable and pointer
    cout << "Value of number: " << number << endl;
    cout << "Value of number (using pointer): " << *ptr << endl;

    // Output the memory address of 'number'
    cout << "Memory address of number: " << &number << endl;
    cout << "Memory address stored in ptr: " << ptr << endl;

    /*
        Explanation:
        - `number` is an integer variable with a value of 25.
        - `ptr` is a pointer to an integer (`int*`) and holds the address of `number`.
        - `&number` gives the memory address of `number`, which is stored in `ptr`.
        - `*ptr` is used to access the value stored at the memory address in `ptr`, also called "dereferencing."
          So, `*ptr` gives us the value of `number`.

        Output:
        - The program will show the value of `number` using both the variable and pointer,
          as well as the memory address where `number` is stored.
    */

    // Changing the value of 'number' using the pointer
    *ptr = 50;  // This updates 'number' to 50 through the pointer

    cout << "New value of number (after using pointer): " << number << endl;

    /*
        Explanation:
        - By setting `*ptr = 50;`, we change the value stored at the memory address in `ptr`.
        - Since `ptr` points to `number`, this effectively changes `number` to 50.
    */

    return 0;
}

/*
    Summary:
    - A pointer stores the address of a variable.
    - The `&` operator gives the address of a variable.
    - The `*` operator, when used with a pointer, is called "dereferencing" and allows access to the value at the address.
    - Pointers are essential for dynamic memory, passing variables by reference, and efficient array handling.
*/