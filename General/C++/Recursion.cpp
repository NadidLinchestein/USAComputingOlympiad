/*
Recursion is a technique in programming where a function calls itself.
In C++, recursion can be used to solve problems that can be broken down into similar sub-problems.

One classic example of recursion is calculating the factorial of a number.
The factorial of a number `n` (written as n!) is the product of all positive integers less than or equal to `n`.
For example, 5! = 5 * 4 * 3 * 2 * 1 = 120.

A recursive function has two main parts:
1. Base case: The condition under which the recursion stops.
2. Recursive case: The part where the function calls itself with a modified argument.

Let's write a recursive function to calculate the factorial of a number.
*/


#include <iostream>
using namespace std;

int factorial(int n) {
    // Base case: if n is 0, return 1 because 0! is 1 by definition.
    if (n == 0) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorial(n - 1); // Function calls itself with (n-1)
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(number);
        cout << "The factorial of " << number << " is " << result << "." << endl;
    }

    return 0;
}


/*
Explanation of how recursion works in this code:
Suppose you call factorial(5):
1. factorial(5) calls factorial(4).
2. factorial(4) calls factorial(3).
3. factorial(3) calls factorial(2).
4. factorial(2) calls factorial(1).
5. factorial(1) calls factorial(0), which hits the base case and returns 1.

Then, the function starts returning values back up the call stack:
- factorial(1) returns 1 * 1 = 1.
- factorial(2) returns 2 * 1 = 2.
- factorial(3) returns 3 * 2 = 6.
- factorial(4) returns 4 * 6 = 24.
- factorial(5) returns 5 * 24 = 120.

Thus, factorial(5) returns 120, which is 5!.
*/
