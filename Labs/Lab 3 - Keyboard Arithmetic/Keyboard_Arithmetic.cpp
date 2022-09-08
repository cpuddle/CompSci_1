// Collin Franklin
// Computer Science I - Mika Morgan
// Lab 3 - Keyboard Arithmetic
// 02-10-22
// Outputing equations into an output file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int Number1; //Defining variable 1
  int Number2; //Defining variable 2
  ofstream outfile;

  outfile.open("output.txt");

  cout << "Please enter a numer, then hit the enter key, and then input another number.\n";
  cin >> Number1; //User input
  cin >> Number2;

  outfile << "Collin Franklin\n";
  outfile << "Computer Science I - Mika Morgan\n";
  outfile << "Lab 3 - Keyboard Arithmetic\n";
  outfile << "02-10-22\n";
  outfile << "Outputting equations into an output file.\n\n";

  outfile << "+------------------------------------------+\n";

  outfile << "Number 1 + Number 2 is " << Number1 + Number2 << endl; // addition
  outfile << "Number 1 - Number 2 is " << Number1 - Number2 << endl; // subtraction
  outfile << "Number 1 * Number 2 is " << Number1 * Number2 << endl; // multiplication
  outfile << "Number 1 / Number 2 is " << (float)Number1 / (float)Number2 << endl; // division
  outfile << "The remainder of Number 1 / Number 2 is " << Number1 % Number2 << endl; // modulus

  outfile << "+------------------------------------------+\n";

  outfile.close();

  system("pause");
  return 0;
}
