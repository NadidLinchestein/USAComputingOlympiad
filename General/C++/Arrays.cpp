/*
    Multidimensional Arrays in C++
    
    In C++, arrays can have more than one dimension. A common example is a 2D array, which is
    an array of arrays. You can think of a 2D array as a table with rows and columns.
    
    Declaration:
      - To declare a 2D array, we specify the number of rows and columns:
        `type arrayName[rows][columns];`
    
    Accessing Elements:
      - Each element in a 2D array can be accessed using two indices: the row index and the column index.
      - `arrayName[row][column]`
    
    Let's look at an example where we initialize a 2D array and access its elements.
*/


#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 2D array with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the 2D array using nested loops
    cout << "2D Array elements:" << endl;
    
    for (int row = 0; row < 3; row++) {           // Outer loop for rows
        for (int col = 0; col < 4; col++) {       // Inner loop for columns
            cout << matrix[row][col] << " ";      // Access each element
        }
        cout << endl;                             // Newline after each row
    }

    return 0;
}

/*
    Explanation:
    - The `matrix` array has 3 rows and 4 columns, so it's of size 3x4.
    - To print all elements, we use two nested loops:
      - The outer loop iterates over each row.
      - The inner loop iterates over each column in the current row.
    - This prints each row on a new line.
    
    Output of this program:
    1 2 3 4
    5 6 7 8
    9 10 11 12
*/


/*
    Higher-Dimensional Arrays:
    - You can also have arrays with more than two dimensions. For example, a 3D array:
        `int array3D[depth][rows][columns];`
    - Accessing elements in a 3D array would require three indices, like `array3D[d][r][c]`.

    Applications:
    - Multidimensional arrays are useful in applications like matrices, grids, and representing
      multi-layered data structures.
*/
