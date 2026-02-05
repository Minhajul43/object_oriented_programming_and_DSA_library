	//Problem No.5 : Bubble Sort
	#include <iostream>
	using namespace std;
	void bubbleSort(int arr[], int n)
	{
	for (int i = 0; i < n - 1; i++)
	     for (int j = 0; j < n - i - 1; j++)
	         if (arr[j] > arr[j + 1])
	         swap(arr[j], arr[j + 1]);
	}
	void printArray(int arr[], int n)
	{
	for (int i = 0; i < n; i++)
	     cout << arr[i] << " ";
	    cout << endl;
	}
	int main(){
	int n;
	cout<< "Enter size of an array: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	      cout<< "Enter element no. "<<i+1 << ": " ;
	      cin>> arr[i];
	 }
	cout<< " Before sorting array: \n";
	for(int i=0; i<n; i++){
	     cout<< arr[i]<< " ";
	 }
	bubbleSort(arr, n);
	cout << "\n After sorting array: \n";
	printArray(arr, n);
	return 0; 
  }
	//Explain: We can read an array and then sort the array using bubble sort and also sorting in accending or decending order.
