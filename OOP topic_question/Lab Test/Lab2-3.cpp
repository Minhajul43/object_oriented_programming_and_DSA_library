// Convert a given intger (seconds) to hours,minutes and seconds
#include <iostream>
using namespace std;
int main(){
  int S,M,H;
  cout << "Enter the time in seconds:";
  cin >>S;
  M=S/60;
  H=M/60;
  S=S%60;
  M=M%60;
  cout << "Time in HH:MM:SS format is: "<<H <<" hour:"<<M<<" minute:"<<S<<" second" <<endl;
  return 0;
}