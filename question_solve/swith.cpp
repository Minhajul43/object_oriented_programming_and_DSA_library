#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter day number:";
  cin >> n;
  switch(n){
    case 1:
    cout << "Today is Saturday";
    break;
    case 2:
    cout << "Today is Sunday";
    break;
    case 3:
    cout << "Today is Monday";
    break;
    case 4:
    cout << "Today is Tuesday";
    break;
    case 5:
    cout << "Today is Wednesday";
    break;
    case 6:
    cout << "Today is Thursday";
    break;
    default:
    cout <<"Today is Friday";
    
    
  }
  return 0;
}