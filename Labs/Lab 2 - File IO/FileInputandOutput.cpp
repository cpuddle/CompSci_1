// Collin Franklin
// Computer Science I - Mika Morgan
// Lab 2 - File I/O
// 01-22-22
// This program opens an input file and creates an output file. It reads a
// year and two real numbers from the input file, performs arithmetic on the
// numbers, then prints the results to the output file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int birth_Date;
	float A, B, Sum, Product;
	ifstream infile;
	ofstream outfile;

	infile.open("input.txt");
	outfile.open("output.txt");

	infile >> birth_Date;

	infile >> A >> B;
	Sum = A + B;
	Product = A * B;

	outfile << "Collin Franklin \n";
	outfile << "Computer Science I... \n\n";

	outfile << birth_Date << '\n';
	outfile << "A and B have the values " << A << " and " << B << "\n";
	outfile << "The sum is " << Sum << "\n";
	outfile << "The product is " << Product << "\n";

	infile.close();
	outfile.close();

	return 0;
}
