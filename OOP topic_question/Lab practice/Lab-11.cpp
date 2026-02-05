/*
Design and implement a FRACTION class in C++ to perform arithmetic operations on
fractions using operator overloading.
Requirements:
Data Members:
o numerator (int)
o denominator (int)
Member Functions / Operators:
o Constructor to initialize numerator and denominator (default values
allowed).
o Overload the following operators:
 + addition of two fractions
 - subtraction of two fractions
 * multiplication of two fractions
 / division of two fractions
o display() print fraction in numerator/denominator format.
o Simplify fractions automatically using GCD.
o Ensure denominator is never zero and always positive.
Sample Input
f1 = 2/3
f2 = ¾
Sample Output
f1 = 2/3
f2 = 3/4
f1 + f2 = 17/12
f1 - f2 = -1/12
f1 * f2 = 1/2
f1 / f2 = 8/9
*/
#include<iostream>
using namespace std;
class FRACTION{
  int numerator;
  int denominator;
  int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
  }
  void Simplify(){
    int g=gcd(abs(numerator),abs(denominator));
    numerator/=g;
    denominator/=g;
    if(denominator<0){
      denominator=-denominator;
      numerator=-numerator;
    }
  }
  public:
  FRACTION(int n=0,int d=1){
    numerator=n;
    denominator=d;
    if(denominator==0){
      cout<<"Denominator cannot be zero. Setting to 1 by default."<<endl;
      denominator=1;
    }
    Simplify();
  }
  FRACTION operator+(FRACTION f){
    return FRACTION(numerator*f.denominator + f.numerator*denominator,denominator*f.denominator);
  }
  FRACTION operator-(FRACTION f){
    return FRACTION(numerator*f.denominator - f.numerator*denominator,denominator*f.denominator);
  }
  FRACTION operator*(FRACTION f){
    return FRACTION(numerator*f.numerator,denominator*f.denominator);
  }
  FRACTION operator/(FRACTION f){
    return FRACTION(numerator*f.denominator,denominator*f.numerator);
  }
  void display(){
    cout<<numerator<<"/"<<denominator<<endl;
  }
};
int main(){
  // given sample input from user
  cout<<"---------------Sample Input---------------"<<endl;
  int x,y,p,q;
  cout<<"Enter numerator and denominator for f1:";
  cin>>x>>y;
  cout<<"Enter numerator and denominotor for f2:";
  cin>>p>>q;
  cout<<"----------------Sample Output---------------"<<endl;
  FRACTION f1(x,y);
  FRACTION f2(p,q);
  cout<<"f1 = ";f1.display();
  cout<<"f2 = ";f2.display();
  cout<<"f1 + f2 = ";(f1+f2).display();
  cout<<"f1 - f2 = ";(f1-f2).display();
  cout<<"f1 * f2 = ";(f1*f2).display();
  cout<<"f1 / f2 = ";(f1/f2).display();
  return 0;
}
