// Collin Franklin
// Computer Science I - Mika Morgan
// Lab 4 - Formatting Output
// 02-19-22
// Formatting Code into a text file

#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outfile;

  double TotalColl, Sales, CountyTax, StateTax, TotalTax;
  TotalColl = 26572.89087;
  Sales = 25068.7993;
  CountyTax = 501.76;
  StateTax = 1002.75212;
  TotalTax = 1504.12890;

  outfile.open("output.txt");
  
  outfile << "Collin Franklin\n";
  outfile << "Computer Science I - Mika Morgan\n";
  outfile << "Lab 4 - Formatting Output\n";
  outfile << "02-19-22\n";
  outfile << "Formatting Code into a text file\n\n\n";

  outfile << setw(13) << 'A' << setw(12) << 'B' << setw(11) << 'C' << '\n';
  outfile << "*************************************\n\n";
  outfile << "X1" << setw(11) << '5' << setw(13) << "15" << setw(12) << "25\n";
  outfile << "X10" << setw(10) << "50" << setw(13) << "150" << setw(12) << "250\n";
  outfile << "X100" << setw(9) << "500" << setw(13) << "1500" << setw(13) << "2500\n\n";

  outfile << "TotalColl = " << setprecision(11) <<TotalColl << ';' << " Sales = " << Sales << ';' << " CountyTax = " << CountyTax << ';' << '\n';
  outfile << "StateTax = " << StateTax << ';' << " TotalTax = " << setprecision(11) << TotalTax << "\n\n";

  outfile << "MONTH: March 2018\n";
  outfile << "---------------------------------\n\n";
  outfile << "Total Collected" << setw(7) << '$' << setprecision(7) << setw(10) << right << TotalColl << '\n';
  outfile << "Sales" << setw(17) << '$' << setprecision(7) << setw(9) << right << Sales << '\n';
  outfile << "County Tax" << setw(12) << '$' << setprecision(5) << setw(8) << right << CountyTax << '\n';
  outfile << "State Tax" << setw(13) << '$' << setprecision(6) << setw(9) << right << StateTax << '\n';
  outfile << "Total Tax" << setw(13) << '$' << setprecision(6) << setw(9) << right << TotalTax << '\n';

  outfile.close();

  system("pause");
  return 0;

}
