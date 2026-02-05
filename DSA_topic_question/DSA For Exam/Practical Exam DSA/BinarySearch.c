// Create a Binary Search function to search for a given element in a sorted array.
#include<stdio.h>
int binarySearch(int arr[],int size, int target){
  int first=0;
  int last=size-1;
  while(first<=last){
    int mid=(first+last)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]<target){
      first=mid+1;
    }
    else{
      last=mid-1;
    }

  }
  return -1;
}
int main(){
 int n;
 printf("Enter the number of elements in the array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the elements of the array in sorted order:\n");
 for(int i=0;i<n;i++){
  printf("Enter element no.%d: ",i+1);
  scanf("%d",&arr[i]);
 }
 int target;
 printf("Enter the element to search:");
 scanf("%d",&target);
 int result=binarySearch(arr,n,target);
 if(result !=-1){
  printf("Element found at index: %d\n",result);
 }
 else{
  printf("Element not found in the array.\n");
 }
 return 0;
}

