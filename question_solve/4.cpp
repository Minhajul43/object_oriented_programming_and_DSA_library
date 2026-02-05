//Simple calcutor 
#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
  char op;
  cout <<"Enter the first number :";
  cin>>num1;
  cout<<"Enter the second number:";
  cin >>num2;
  cout <<"Enter the operator(+,-,*,/):";
  cin >>op;
  switch(op){
    case '+':
    cout <<"Sum ="<<num1+num2<<endl;
    break;
    case '-':
    cout <<"Difference ="<<num1 - num2<<endl;
    break;
    case '*':
    cout <<"Multiplication ="<<num1*num2<<endl;
    break;
    case '/':
    cout <<"Division ="<<num1/num2 <<endl;
    break;
  }
  return 0;

}