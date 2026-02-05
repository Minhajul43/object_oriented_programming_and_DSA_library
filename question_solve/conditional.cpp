#include<iostream>
using namespace std;
int main()
{
  int t;
  cout << "Enter a time: ";
  cin >> t;
  if(t<10){
    cout << "Good morning!"<< endl;
  }
  else if(t<20){
    cout << "Good day!" << endl;
  }
  else {
    cout << "Good evening !" <<endl;
  }
  return 0;                                                                           
}