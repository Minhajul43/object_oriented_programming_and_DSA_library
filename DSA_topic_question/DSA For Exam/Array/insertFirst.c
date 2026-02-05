// insertAt position into array
#include<stdio.h>
int main(){
  int arr[100], pos,i,n,value;
  printf("Enter number of elements in array:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Before insertion array elements are:\n");
  for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  printf("\nEnter the position where you want to insert the elementf:");
  scanf("%d",&pos);
  printf("Enter the value to insert:");
  scanf("%d",&value);
  // shifting elements to right
  for(i=n-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
  }  
  arr[pos-1]=value;
  n++;
  printf("After insertion array elements are:\n");
  for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  return 0;
}