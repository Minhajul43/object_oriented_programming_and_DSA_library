#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target);
int main()
{
  // int sixe=10; // size of the array
  // int arr[]={12,23,34,54,56,76,23,76,98};
  int arr[10];
  cout << "Entter the elements of the array:\n";
  for(int i=0;i<10;i++){
    cin >> arr[i];
  }

  int size=sizeof(arr)/sizeof(arr[0]);
  int target;
  cout << "Enter the element to search :";
  cin >>target;
  int result=linearsearch(arr, size, target);
  if(result !=-1){
    cout << "Element found at index: "<<result << endl;
  }
  else {
    cout << "Element not found in the array." << endl;
  }
  return 0;
}
int linearsearch(int arr[],int size,int target){
  for(int i=0;i<size;i++){
    if(arr[i]==target){
      return i; // return the index of the found element
    }
  }
  return -1; // element not found!
}