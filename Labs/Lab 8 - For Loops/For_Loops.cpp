// Collin Franklin
// Computer Science I - Mika Morgan
// Lab 8 - For Loops
// 03-26-22
// Creating a For Loop

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int r, c; // r=rows , c=columns
    int sum = 0;
    ofstream outfile;

    outfile.open("output.txt");

    for (r=1; r<=10; r++)
    {
      for (c=1; c<=10; c++)
      {
        outfile << setw(3) << r+c;
        sum += (r + c); //accumulator
      }
      outfile << '\n'; //new line to stop the line once it gets to 10
    }
    outfile << '\n' << "The sum of all numbers is " << sum << " "; //printing the sum
    // in the output file

    outfile.close();
    system("pause");
    return 0;
}
