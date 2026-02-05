#include<iostream>
using namespace std;
int main()
{
  int arr[]={12,23,34,34,54,43};
  int size=sizeof(arr)/sizeof(arr[0]);
  int minValu=arr[0];
  for(int i=0;i<size;i++){
    if(arr[i]<minValu){
      minValu=arr[i];
    }
  }
  cout << "Loest valu is:"<<minValu<<endl;
  return 0;
}