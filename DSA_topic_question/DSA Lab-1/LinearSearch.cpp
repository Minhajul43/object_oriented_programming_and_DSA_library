//	Problem No.4 : Linear Search
	#include <iostream>
	using namespace std;
	int main(){
	int n;
	cout<< "Enter number of element : " ;
	cin>>n;
	int item[n],loc=0,target;
	for(int i=1;i<= n;i++){
	    cout<< "Enter "<<i<< " number element : " ;
	   cin>> item[i] ;
	}
	cout<< "Enter which item you want to search : ";
	cin>> target;
	for(int i=1;i<=n;i++){
	     if(item[i]== target){
	         cout << "found at index no: "<<i <<endl;
	   }
	}
	return 0; 
	}
//	Explain : We can add an array by giving input and then we can search a number from the array.

