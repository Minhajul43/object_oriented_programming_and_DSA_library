//traversing a linear array 
#include<iostream>
using namespace std;
void Traversion(int arr[],int n)
{
  cout << "Array:";
  for(int j=0;j<n;j++)
  {
    cout<< arr[j]<<" ";
 }
}
  int main()
  {
    int arr[10];
    cout << "Enter the elements of the array:\n";
    for(int i=0;i<10;i++){
      cin >> arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    Traversion(arr,n);
    return 0;

  }
