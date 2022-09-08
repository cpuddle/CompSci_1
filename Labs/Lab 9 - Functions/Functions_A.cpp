// Collin Franklin
// Computer Science I - Mika Morgan
// Lab 9 - Functions
// 04-1-22
// Making Functions

#include <iostream>
#include <fstream> // to use output

using namespace std;
int FindMax(int A, int B, int C);
int PrintVal(int X, ofstream &);

int main()
{
ofstream outfile;
outfile.open("output.txt"); //open output.txt
int A, B, C, Biggest;
cout << "Please input values for A, B, C." << endl; //prints out to console
cin >> A >> B >> C; //need input for the output.txt
Biggest = FindMax(A, B, C);
outfile << PrintVal(Biggest, outfile); //outputs to output.txt
outfile.close();
return 0;
}


int FindMax(int A, int B, int C) // Function : FindMax
{                                // Input: accepts three integer parameter
int Big;                         // Process: Finds the biggest integer
if (A >= B && A >= C)            // Output : The biggest number
Big = A;
else if (B >= A && B >= C)
Big = B;
else
Big = C;
return Big;
}

int PrintVal(int X, ofstream &out) // Function : PrintVal
{                                  // Input: accpets one integer parameter
 out << "The answer is ";          // Process: print input parameter to the screen
 return X;                         // Output: integer
}
