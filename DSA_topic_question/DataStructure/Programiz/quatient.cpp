#include<iostream>
using namespace std;
void quat(int,int);

void quat(int divided,int divisor)
{
 int  quatient =divided/divisor;
  int remainder =divided%divisor;
  // return quatient;
  // return remainder;
}
int main()
{
  int quatient,divisor,divided,remainder;
  cout <<"\n Enter divided number:";
  cin >> divided;
  cout << "\n Enter divisor number:";
  cin >> divisor;
  quat(divided,divisor);
  
  cout << "Quatient:"<<quatient <<endl;
  cout << "Remainder:"<<remainder <<endl;
  return 0;
}