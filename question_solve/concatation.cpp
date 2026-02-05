#include<iostream>
#include<string>
using namespace std;
int main()
{
  string FirstName="Minhajul";
  string LastName="Islam";
  string FullName=FirstName+" " +LastName;
  // string FullName=FirstName.append(LastName);
   
  cout << FullName;
  return 0;
}