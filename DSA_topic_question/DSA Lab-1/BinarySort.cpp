	//Problem No.6 : Binary Search
	#include <iostream>
	using namespace std;
	int binarySearch(int arr[], int n, int target){
    int F=0, L=n-1;
	while(F <= L) {
    
	        int M = ( F+ L) / 2;
	        if(arr[M]== target){
        return M;
	  }
	else if(arr[M]>target){
	        L=M-1;
}
	else{
	         F=M+1;
	   }
   
	}
    return -1;
}
	
	
	int main()
	{
	int n;
	cout<< "Enter size of the array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n ; i++){
	     cout<< "Enter the element no."<<i+1<< ": ";
	     cin>> arr[i];
	 }
	cout<< "User input array : "<< endl ;
	for(int i=0;i<n;i++){
	     cout<< arr[i]<< " ";
	 }
	int target;
	cout<< "\nWhich element do you want to search: ";
	cin>>target;
	int result = binarySearch(arr, n , target);
	if(result != -1){
	    cout<< "Element is present at "<< result<< " index" ;
  }
	else{
    cout<< "Element is not present";
  }
	return 0;
	}
	//Explain : With this program we can search a number or element from an array. This program is based on the algorithm of binary search.
