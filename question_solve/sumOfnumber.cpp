#include<iostream>
using namespace std;
int  sum(int n){
 int sum=0;
 for(int i=1;i<n;i++){
  sum +=i;
 }
 return sum;
}
int main(){
  int n;
  cout << "Enter number of n:";
  cin >>n;
  // int sum(n);
  cout << "The sum of the number is:" <<sum(n);
  return 0;

}