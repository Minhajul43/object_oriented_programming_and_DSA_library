#include<iostream>
using namespace std;
int main()
{
  XY:
  int arr[5]={12,15,18,21,24};
  // cout << "Input the array elements:";
  // for(int i=0;i<5;i++){
  //   cin >> arr[i];
  // }
  cout << "Now Memory Location of the array element!!" << endl;
  // for(int i=0;i<5;i++){
  //   cout << "arr["<< i<<"]="<<arr[i]<<" " <<"At Memory Address:"<<" "<<&arr[i]<<endl;
  // }
  int i;
  cout << "\n Enter array index:";
  cin >>i;
  if(i<0||i>5){
    cout << "Invalid index!!";
  }
  else {
    cout << "arr["<< i<<"]="<<arr[i]<<" "<<endl <<"At Memory Address:"<<" "<<&arr[i]<<endl;
  }

  int again; 
    cout << " \n Do you want to insert again? yes Or no == 1/0:";
    cin >> again;
    if(again==1){
      goto XY;
    }
    else {
      cout << "Thank you !";
    }

  return 0;
}