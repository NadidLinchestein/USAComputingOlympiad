/*
    Classes in C++
    
    A `class` in C++ is a blueprint for creating objects, allowing us to bundle related data and 
    functions together. It’s similar to a `struct`, but with additional capabilities like
    encapsulation, inheritance, and access control (public, private, protected).
    
    Classes consist of:
      - Data members (variables) that store the state of the object.
      - Member functions (methods) that define the behavior of the object.
    
    Access Modifiers:
      - `public`: Accessible from outside the class.
      - `private`: Only accessible from within the class.
      - `protected`: Accessible within the class and derived classes (used in inheritance).
    
    Let's define a simple `Car` class as an example.
*/


#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;   // Private data member
    int year;       // Private data member

public:
    // Constructor: initializes a new Car object
    Car(string carBrand, int carYear) {
        brand = carBrand;
        year = carYear;
    }

    // Public member function to display car information
    void displayInfo() {
        cout << "Car Brand: " << brand << ", Year: " << year << endl;
    }

    // Setter function for the brand (demonstrates encapsulation)
    void setBrand(string newBrand) {
        brand = newBrand;
    }

    // Getter function for the brand
    string getBrand() {
        return brand;
    }
};

int main() {
    // Creating a Car object using the constructor
    Car car1("Toyota", 2020);

    // Accessing public member function to display info
    car1.displayInfo();  // Outputs: Car Brand: Toyota, Year: 2020

    // Changing the brand using the setter function
    car1.setBrand("Honda");
    cout << "Updated brand: " << car1.getBrand() << endl;  // Outputs: Updated brand: Honda

    return 0;
}

/*
  Explanation:
    - We defined a `Car` class with two private data members: `brand` and `year`.
    - The constructor initializes `brand` and `year` when a new `Car` object is created.
    - The `displayInfo` function is a public member function that displays the car's brand and year.
    - We used getter and setter functions to demonstrate encapsulation: setting and getting `brand` 
      with controlled access.

  Output:
    - The program outputs the car's information and then updates and outputs the new brand name.
*/

/*
  Summary:
    - A `class` groups data and functions, allowing you to model real-world entities.
    - Access modifiers control visibility (`public`, `private`, `protected`).
    - Constructors initialize objects, while member functions define behavior.
    - Getters and setters demonstrate encapsulation, allowing controlled access to data members.
    - Classes enable object-oriented programming, making C++ a powerful language for large projects.
*/
