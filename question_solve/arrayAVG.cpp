#include<iostream>
using namespace std;
int main()
{
  int sum=0;
  // int age[]={12,21,20,24,13};
  char word[]="My name is Minhajul Islam";
  // int length=sizeof(age)/sizeof(age[0]);
  int length=sizeof(word)/sizeof(word[0]);

  cout << length;
//   for(int i:word){
//     sum +=i;
//   }
//  float avg =sum/length;
//   cout << "The averge of age is:" <<avg <<"\n";
  return 0;
}