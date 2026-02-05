//printing given number of squres;
#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,i=1;
  cout<<"Enter the numbeer:";
  cin >>n;
  do{
    sum +=i*i;
    i++;
  }while(i<=n);
  cout<<"The squres Of "<<n<<" number is ="<<sum<<endl;
  return 0;


}