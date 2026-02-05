// calculate the volumes of a sphere
#include <iostream>
using namespace std;
int main()
{
   double radius ,volumes;
  //  const double PI 3.14159;
   cout << "Enter the radius of the sphere: ";
   cin >> radius;
   volumes = (4.0/3.0)*3.14159*radius*radius*radius;
   cout << "The volume of the sphere is:"<<volumes <<endl;
   return 0;
}