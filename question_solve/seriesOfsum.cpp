// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "How many number you add:";
//   cin>>n;
//   double sum=0;
//   for(int i=1;i<n;i++){
//     sum += (1/i*i);
//   }
//   cout <<showpoint;
//   cout << "The sum of number is:" <<sum  <<"\n";
//   return 0;
// }

#include<iostream>
using namespace std;
int findsum(int n){
    double sum=0;
    for(int i=1;i<=n;i++){
        cout << "1/" << i << "^" << i << " +" << sum;
        sum=sum+(1/(i*i));
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n , till which sum is required:-";
    cin>>n;
    cout<<findsum(n);
    cout << "The sum of series is:"<< sum;
    return 0;
}