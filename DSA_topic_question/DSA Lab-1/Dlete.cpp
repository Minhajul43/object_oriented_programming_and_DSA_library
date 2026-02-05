
//	Problem No.3 : Delete from an Array
	#include<iostream>
	using namespace std;
	int main(){
	int n,i;
	cout<< "Size of Array : " ;
	cin >> n;
	int arr[n];
	for(int i = 1; i <= n; i++){
	   cout<< "Enter element no. "<<i << " : ";
	   cin >> arr[i];
	}
	int index;
	cout<< "Enter index no of the deleting element: " ; 
	cin >> index;
	if(index >= n+1)
	     cout << "Invalid";
	else
	{
	      for (i = index; i <=n; i++)
	             arr[i] = arr[i+1];
	             cout << "Array after deletion is:\n";
	             for (i = 1; i <= n; i++)
	                     cout << arr[i] << " ";
	}
	return 0; 
	}
//	Explain : We can delete an element from an array by using this code. 

