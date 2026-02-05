#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a number you print:";
  cin >> n;
  for(int i=1;i<=n;i++){
    cout << n <<" "<<"X" <<" "<< i <<" "<<"=" <<" "<< n*i <<"\n";
  }
  return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
  
//   int n;
//   cout <<"Enter Which number you print:";
//   cin >> n;
//   for(int i=1;i<=10;i++){
//     cout << n <<" "<<"X" <<" "<< i << "=" <<" "<< n*i << "\n";
// }
// return 0;
// }