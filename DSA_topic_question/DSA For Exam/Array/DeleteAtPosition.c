// Delete array element at given position 
#include<stdio.h>
int main()
{
  int arr[100],pos,i,n;
  printf("Enter number of elements in array:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Before deletion array elements are:\n");
  for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  printf("\nEnter the position where you want to delete the element:");
  scanf("%d",&pos);
  // shifting elements to left
  for(i=pos-1;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  n--;
  printf("After deletion array elements are:\n");
  for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  return 0;
}