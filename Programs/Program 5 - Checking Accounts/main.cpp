// Collin Franklin
// Computer Science I - Mika Morgan
// Program 5 - Checking Accounts
// 04-12-22
// Make checking accounts in code

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//prototypes

void calculation (struct account arr[5], string name2, char tc, double amount);
void deposit (struct account arr[5], double amount);
void withdrawal (struct account arr[5], double amount);
void overdraft (struct account arr[5]);
void printArray(struct account arr[5]);

//global variables
string name2;
double amount;
char tc;
int item;

// make struct account
struct account
{
  string name;
  double account_balance;
};


int main()
{
  //put struct in array
  account arr[5];

  arr[0].name = "Michelle";
  arr[0].account_balance = 0.0;

  arr[1].name = "Melanie";
  arr[1].account_balance = 0.0;

  arr[2].name = "Marlon";
  arr[2].account_balance = 0.0;

  arr[3].name = "Mika";
  arr[3].account_balance = 0.0;

  arr[4].name = "Marlee";
  arr[4].account_balance = 0.0;


  //Open checking.dat
  ifstream infile;
  infile.open("checking.dat");

  //read in checking.dat
  while(!infile.eof())
  {
    infile >> name2 >> tc >> amount;
    // cout << name2 << endl << tc << endl << amount << endl;

    for (int i=0; i<5; i++)
      {
        if (name2 == arr[i].name)
        {
          item = i;
        }

      }

    calculation (arr, name2, tc, amount);

  }

printArray(arr);

}


void calculation (struct account arr[5], string name2, char tc, double amount)
{

  switch(tc) // switch statement to calculate
  {
    case 'A':
      deposit (arr, amount);
      break;
    case 'B':
      deposit (arr, amount);
      break;
    case 'M':
      deposit (arr, amount);
      break;
    case 'C':
      withdrawal (arr, amount);
      break;
    case 'D':
      withdrawal (arr, amount);
      break;
    case 'O':
      withdrawal (arr, amount);
      break;
    case 'T':
      withdrawal (arr, amount);
      break;
        }
  return;
}


void deposit(struct account arr[5], double amount) //adding
{
   arr[item].account_balance += amount;
  return;
}


void withdrawal(struct account arr[5], double amount) //subtracting
{
  arr[item].account_balance -= amount;
  overdraft (arr);
  return;
}


void overdraft(struct account arr[5]) //subtracts 30 if balance < 0
{
  if (arr[item].account_balance < 0)
    arr[item].account_balance -= 30;
  return;
}


void printArray(struct account arr[5]) //prints array
{
  for (int i = 0; i < 5; i++)
    {
      cout << arr[i].name << fixed << setw(10) << "$" << arr[i].account_balance << endl;
    }
  return;
}
