#include<iostream>
#include<cmath>
using namespace std;
//1+2+4+8+16.....
int sum(int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum +=pow(2,i);
  }
  cout << sum;
  return 0;
}
int main()
{
  int n;
  cout << "Enter the series number:";
  cin >> n;
  int sum(n);
  // cout <<"The sum of series is:"<<sum <<"\n";
  return 0;
}