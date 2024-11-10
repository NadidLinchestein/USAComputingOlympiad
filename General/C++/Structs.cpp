/*
    Structs in C++

    A `struct` (short for "structure") is a user-defined data type in C++ that allows
    grouping variables of different data types under a single name. 
    Structs are commonly used to represent complex data types with multiple properties.

    Declaration:
      - Structs are declared using the `struct` keyword.
      - Inside the struct, you define variables (members) with different data types.

    Let's define a struct to represent a `Person`.
*/


#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;      // Member variable for name
    int age;          // Member variable for age
    float height;     // Member variable for height (in meters)

    // You can also define member functions inside a struct
    void introduce() {
        cout << "Hi, my name is " << name << ", I am " << age << " years old, "
             << "and my height is " << height << " meters." << endl;
    }
};

int main() {
    // Declare and initialize a Person struct
    Person person1;
    person1.name = "Alice";     // Accessing and setting struct members
    person1.age = 30;
    person1.height = 1.65;

    // Output the struct members
    cout << "Person 1's name: " << person1.name << endl;
    cout << "Person 1's age: " << person1.age << endl;
    cout << "Person 1's height: " << person1.height << " meters" << endl;

    // Call the introduce() function
    person1.introduce();

    /*
    Explanation:
        - We declared a struct called `Person` with three members: `name`, `age`, and `height`.
        - In the `main` function, we create an instance of `Person` called `person1`.
        - We access and set each member using the dot operator (`.`).
        - We can also call the `introduce` function to output a formatted string.

    Output:
        - This will display the values of `person1`'s members and a message from the `introduce` function.
    */

    // Example of initializing a struct directly
    Person person2 = {"Bob", 25, 1.75};
    person2.introduce();  // Outputs: "Hi, my name is Bob, I am 25 years old, and my height is 1.75 meters."

    return 0;
}

/*
  Summary:
    - A `struct` groups variables of different types under a single type name.
    - Members of a struct are accessed with the dot operator.
    - Structs allow us to organize related data into a single unit, which is helpful for managing complex data.
    - You can also define member functions in a struct to operate on its data.
*/
