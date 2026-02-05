// accept two items weight and number of purchases and calculate the average value
#include <iostream>
using namespace std;
int main()
{
   double w1,w2;
   int n1,n2;
   cout << "Enter the weight of item 1:";
   cin >>w1;
  cout << "Enter the weight of item 2:";
  cin >>w2;
  cout << "Enter the number of purchases for item 1:";
  cin >> n1;
  cout << "Enter the number of purchases for item 2:";
  cin >> n2;
  double average = (w1 *n1 + w2 *n2)/(n1+n2);
  cout << "\nAverage value of the items: " <<average << endl;
  return 0;
}
  