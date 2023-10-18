// Collin Franklin
// Computer Science I - Mika Morgan
// Program 3 - BMI Calculator
// 03-07-22
// Creating a BMI Calculator in code

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  //initialize variables
  float height;
  int weight;
  float BMI;

  cout << "Please enter your height (inches)" << endl;
  cin >> height;
  cout << "Now your weight (imperical units)." << endl;
  cin >> weight;

  //BMI calculation
  BMI = (weight * 703) / pow(height,2);

  cout << BMI << endl;

  if(BMI < 18.5)
  cout << "Underweight\n";

  else if (BMI >= 18.5 && BMI <= 24.9)
    cout << "Normal\n";

  else if (BMI >= 25 && BMI <= 29.9)
    cout << "Overweight\n";

  else
    cout << "Obese\n";

  return 0;
}
