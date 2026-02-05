#include<iostream>
using namespace std;
int main()
{
// {   int n;
//   cout << "Enter array size:";
//   cin >>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >>arr[i];
//   }
  XY:
  int arr[10]={23,34,22,54,43};
  int n=5;
 
    int position,value;
    cout << "The current array is!" <<endl;
    for(int i=0;i<n;i++){
      cout << arr[i] <<" ";
    }
    cout << "\n Enter the insert value:";
    cin >> value;
    cout << "\n Enter value position:";
    cin >> position;

    if(position<0||position>n){
      cout <<"Invalid Positon!!";
    }
    else{
      arr[position]=value;
    }
    cout << "The Inserted array is!!" <<endl;
    for(int i=0;i<n;i++){
      cout <<arr[i] <<" ";
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
