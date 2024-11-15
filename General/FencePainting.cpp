/*
    Several seasons of hot summers and cold winters have taken their toll on Farmer John's fence,
    and he decides it is time to repaint it, along with the help of his favorite cow, Bessie. 
    Unfortunately, while Bessie is actually remarkably proficient at painting, she is not as good 
    at understanding Farmer John's instructions.

    If we regard the fence as a one-dimensional number line, Farmer John paints the interval between 
    x=a and x=b. For example, if a=3 and b=5, then Farmer John paints an interval of length 2. 
    Bessie, misunderstanding Farmer John's instructions, paints the interval from x=c to x=d, 
    which may possibly overlap with part or all of Farmer John's interval.

    Please determine the total length of fence that is now covered with paint.

    INPUT FORMAT (file paint.in):
    The first line of the input contains the integers a and b, separated by a space (a<b).
    The second line contains integers c and d, separated by a space (c<d).

    The values of a, b, c, and d all lie in the range 0…100, inclusive.

    OUTPUT FORMAT (file paint.out):
    Please output a single line containing the total length of the fence covered with paint.

    SAMPLE INPUT:
    7 10
    4 8

    SAMPLE OUTPUT:
    6

    Explanation:
    Here, 6 total units of fence are covered with paint, from x=4 all the way through x=10.

    Problem - (https://usaco.org/index.php?page=viewproblem2&cpid=567)
    USACO 2015 December Contest, Bronze. 
    Problem 1. Fence Painting
*/


#include <iostream>
#include <fstream>
#include <algorithm> // for min and max
using namespace std;

int main()
{
    ifstream fin("paint.in");
    ofstream fout("paint.out");

    int a, b, c, d;

    // Input the ranges from the file
    fin >> a >> b;
    fin >> c >> d;

    // Determine the total length of fence covered with paint
    int total_length;

    if (b < c || d < a)
    {
        // No overlap, the intervals are separate
        total_length = (b - a) + (d - c);
    }
    else
    {
        // Overlap, we take the union of the intervals
        total_length = max(b, d) - min(a, c);
    }

    // Output the total length of the painted fence to the output file
    fout << total_length << endl;

    // Close file streams
    fin.close();
    fout.close();

    return 0;
}