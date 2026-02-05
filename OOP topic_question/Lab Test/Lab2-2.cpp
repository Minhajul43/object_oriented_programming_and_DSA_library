// convert Centigrade ot fahrenheit
#include <iostream>
using namespace std;
int main()
{
  int C;
  cout << "Enter the temperature in Centigrade: ";
  cin >> C;
  double F=(C*9.0/5.0)+32;
  cout << "Temperature in Fahrenheit: "<<F<<endl;
  return 0;
}