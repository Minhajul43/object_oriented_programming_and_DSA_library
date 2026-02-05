// Insertion into a linear array
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of elements in the array:";
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout << "Enter elements no:"<< i+1 << "-";
  cin >> arr[i];
  }
  int index ,value;
  cout <<"Enter the index no of the new element:";
  cin >> index;
  cout << "Enter the value you want to insert:";
  cin >> value;
  if (index >n){
    cout << "Invalid input ";
  }
  else {
    for (int i = n - 1; i >= index - 1; i--)
 arr[i+1] = arr[i];
 arr[index -1] = value;
 cout << "Array after insertion is:\n";
 for (int i = 0; i <= n; i++)
 cout << arr[i] << " ";
  }
  return 0;
}
