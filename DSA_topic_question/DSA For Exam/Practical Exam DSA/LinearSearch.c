// create a Linear Search Program in C
#include<stdio.h>
int LinearSearch(int arr[],int size, int target){
  for(int i=0;i<size;i++){
    if(arr[i]==target){
      return i; 
    }

  }
  return 1;
}
int main(){
  int n;
  printf("Enter the number of elements in the array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array:\n");
  for(int i=0;i<n;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  int target;
  printf("Enter the element to search for:");
  scanf("%d",&target);
  int result= LinearSearch(arr, n, target);
  if(result !=-1){
    printf("Element found at index:%d\n", result);
  }
  else{
    printf("Element not found in the array.\n");
   }
   return 0;


  
}