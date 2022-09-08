// Collin Franklin
// Computer Science I - Mika Morgan
// Program 2 - Volume Arithmetic
// 02-13-22
// Writing simple functions in code

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  const float PI = 3.14;
  float volume_cone; //declaring volume for cone
  float volume_cylinder; //declaring volume for cylinder
  float volume_sphere; //delcaring volume for sphere
  float cone_radius; //declaring radius for cone
  float cone_height; //declaring height for cone
  float cylinder_radius; //declaring radius for cylinder
  float cylinder_height; //declaring height for cylinder
  float sphere_radius; //declaring radius for sphere
  float total; //declaring total

  //solution for cone
  cout << "Please enter a number for the value of the radius" <<
  " and height of a cone.\n";
  cin >> cone_radius;
  cin >> cone_height;
  volume_cone = ((float)1/3) * PI * pow(cone_radius,2) * cone_height;
  cout << "The volume of the cone is " << volume_cone << endl;

  //solution for cylinder
  cout << "Now, enter a number for the value of radius" <<
  " and height of a cylinder.\n";
  cin >> cylinder_radius;
  cin >> cylinder_height;
  volume_cylinder = PI * pow(cylinder_radius,2) * cylinder_height;
  cout << "The volume of the cylinder is " <<volume_cylinder << endl;

  //solution for sphere
  cout << "Again, enter a number for the value of just the height" <<
  " for the sphere.\n";
  cin >> sphere_radius;
  volume_sphere = ((float)4/3) * PI * pow(sphere_radius,3);
  cout << "The volume of the sphere is " <<volume_sphere << endl;

  total = volume_cone + volume_sphere + volume_cylinder;
  cout << "Here is the total of all volumes : " <<total << endl;

  return 0;
}
