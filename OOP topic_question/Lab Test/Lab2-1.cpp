//perimeter and Area of a circle
#include <iostream>
using namespace std;
const double PI= 3.14159;
int main()
{
  int r;
  cout << "Enter the radius of the circle:";
  cin >> r;
  double area = PI *r*r;
  double perimeter= 2*PI*r;
  cout << "Area of the circle     : " << area <<endl;
  cout << "Perimeter of the circle: " << perimeter << endl;
  return 0;
}