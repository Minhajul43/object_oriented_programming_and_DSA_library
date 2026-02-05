#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int target);
int main()
{
  int arr[10];
  cout << "Enter the elements of the array :\n";
  for(int i=0;i<10;i++){
    cin >> arr[i];
  }
  int size = sizeof(arr)/sizeof(arr[0]);
  int target;
  cout << "Entert the element to search :";
  cin >> target;
  int result =binarysearch(arr, size, target);
  if(result != -1){
    cout << "Element found at index: " << result << endl;
  }
  else {
    cout << "Element not found in the array." << endl;
  }
  return 0;
}
int binarysearch(int arr[],int size, int target) {
  int first = 0;
  int last =size -1;
  while(first<=last){
    int mid =(first+last)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]<target){
      first =mid +1;
    }
    else {
      last =mid -1;
    }
  }
  return -1;
  //element not found
}
