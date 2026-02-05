// //print number 
// //     1
// //    2 2
// //   3 3 3
// // ..........
#include<iostream>
using namespace std;
int main()
{
  int row=5;
  for(int i=1;i<=row;i++){
    for(int space=1;space<=row-i;space++){
      cout<<" ";
    }
    for(int j=1;j<=i;j++){
      cout<< i <<" ";
    }
    cout<<endl;
  }
  return 0;
}
// #include <iostream>
// using namespace std;
// int main() {
// int rows = 5;
// for (int i = 1; i <= rows; i++) {
// // Print leading spaces
// for (int space = 1; space <= rows - i; space++) {
// cout << " ";
// }
// // Print numbers with a space between them
// for (int j = 1; j <= i; j++) {
// cout << i << " ";
// }
// cout << endl;
// }
// return 0;
// }