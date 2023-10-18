// Collin Frank lin
// Computer Science I - Mika Morgan
// Program 4 - Student Stats
// 03-30-22
// Read in .dat file and classify

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
void grade (string class_grade);
float avg (float total, float num_students);
int max_number (int num_grade);
int min_number (int num_grade);


int largest = 0;
int smallest = 200;
int freshman = 0;
int sophomore = 0;
int junior = 0;
int senior = 0;

int main()
{
  string first_name, last_name, class_grade;
  int num_grade;
  float num_students = 0, total = 0;
	ifstream infile;
  infile.open("students.dat");

  while(!infile.eof())
  {
    infile >> first_name >> last_name >> class_grade >> num_grade;
    num_students++;
    total += num_grade;

    largest = max_number(num_grade);
    smallest = min_number(num_grade);
    grade (class_grade);
  }
  cout << "Highest Grade: " << largest << endl;
  cout << "Lowest Grade: " << smallest << endl;
  cout << "Class Average: "<< setprecision(3) << avg (total, num_students) << endl;
  cout << "Freshman: " << freshman << endl;
  cout << "Sophomore: " << sophomore << endl;
  cout << "Junior: " << junior << endl;
  cout << "Senior: " <<senior << endl;

  infile.close();

}

void grade (string class_grade)
{
  if (class_grade == "freshman")
  {
    freshman++;
  }
  else if (class_grade == "sophomore")
  {
    sophomore++;
  }
  else if (class_grade == "junior")
  {
    junior++;
  }
  else
  {
    senior++;
  }
  return;
}

float avg (float total, float num_students)
{
  return total / num_students;
}

int max_number (int num_grade)
{
  while (num_grade != -1)
  {
    if (num_grade > largest)
    {
      largest = num_grade;
    }
    return largest;
  }
  return 0;
}

int min_number (int num_grade)
{
  while (num_grade != -1)
  {
    if (num_grade < smallest)
    {
      smallest = num_grade;
    }
    return smallest;
  }
  return 0;
}
