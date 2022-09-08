// Collin Franklin
// Computer Science I - Mika Morgan
// Lab 9 - Functions
// 04-9-22
// Demonstrate the use of a simple function definition and call
// Demonstrate the correct use of function prototypes
// Demonstrate functions calling other functions

#include <iostream>

using namespace std;

double num1, num2; // declaring num1 and num2
int operation; // declaring operation

void prompt(double num1, double num2); // prompt function
double addition(double num1, double num2); // addition function
double subtraction(double num1, double num2); // subtraction function
double multiplication(double num1, double num2); // multiplication function
double division(double num1, double num2); // division function
void answer(int operation); // answer function

int main()
{
  prompt(num1, num2); // only need prompt function in main()
}

void prompt(double num1, double num2)
{
  cout << "Enter 2 numbers" << endl; 
  cin >> num1 >> num2; //input num1 and num2
  cout << "What do you want to do with these numbers?" << endl;
  cout << "1. Add" << endl; //the visual menu
  cout << "2. Subtract" << endl;
  cout << "3. Multiply" << endl;
  cout << "4. Divide" << endl;

  cin >> operation;

  switch (operation) //the switch case menu
  {
    case 1:
    answer(addition(num1, num2));
    break;
    case 2:
    answer(subtraction(num1, num2));
    break;
    case 3:
    answer(multiplication(num1, num2));
    break;
    case 4:
    answer(division(num1, num2));
    break;
  }
}

double addition(double num1, double num2)
{
  return num1 + num2;
}

double subtraction(double num1, double num2)
{
  return num1 - num2;
}

double multiplication(double num1, double num2)
{
  return num1 * num2;
}

double division(double num1, double num2)
{
  return num1 / num2;
}

void answer(int operation)
{
  cout <<"The answer is: " << operation;
}
