#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  double A = 132.364, B = 26.91, C = 307;
  cout << A / B << '\n';

  cout << setw(3) << B << '\n';
  cout << setw(4) << B << '\n';
  cout << setw(5) << B << '\n';
  cout << setw(6) << B << '\n';  // first occurrence of a padded blank
  cout << setw(7) << B << '\n';
  cout << setw(8) << B << '\n';
  cout << setw(8) << B << setw(9) << B << setw(10) << B << '\n';
  cout << setw(8) << A << setw(9) << A << setw(10) << A << '\n';
  cout << setw(8) << C << setw(9) << C << setw(10) << C << "\n\n";

  cout << A << '\n';
  cout << setprecision(2) << A << '\n';  //What happened??
  cout << setprecision(3) << A << '\n';
  cout << setprecision(4) << A << '\n';
  cout << setprecision(5) << A << '\n';
  cout << setprecision(6) << A << '\n';
  cout << setprecision(7) << A << '\n';
  cout << setprecision(8) << A << "\n\n";

  cout << A << '\n';
  cout << setprecision(3) << A << '\n';
  cout << setprecision(4) << A << '\n';
  cout << A << '\n';
  cout << A << '\n';
  cout << A << "\n\n";

  cout << setprecision(3) << 56789.432 << "\n\n";

  cout << A << '\n';
  cout << fixed << setprecision(1) << A << '\n';
  cout << fixed << setprecision(2) << A << '\n';
  cout << fixed << setprecision(3) << A << '\n';
  cout << fixed << setprecision(4) << A << '\n';
  cout << fixed << setprecision(5) << A << '\n';
  cout << fixed << setprecision(6) << A << "\n\n";

  cout << A << '\n';
  cout << fixed << setprecision(2) << A << '\n';
  cout << A << '\n';
  cout << A << "\n\n";

  cout << setw(7) << C << '\n';
  cout << left << setw(7) << C << '\n';
  cout << setw(7) << C << '\n';
  cout << right << setw(7) << C << '\n';
  cout << setw(7) << C << "\n\n";

  system("pause");
  return 0;
}
