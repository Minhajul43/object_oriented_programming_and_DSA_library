#include<stdio.h>
int main()
{
  printf("This is a program of insertion or add element in array at specific position\n");
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int arr[n];
  printf("----------Enter the array element--------\n");
  for(int i=0;i<n;i++){
    printf("Enter the element no.%d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Before insertion the array element is:\n");
  for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  n=n+1;
  int pos,value;
  printf("\n Enter the insert value:");
  scanf("%d",&value);
  printf("\n Enter the insert position:");
  scanf("%d",&pos);
  if(pos<0||pos>n){
    printf("Invalid position!!");
  }
  else{
    for(int i=n-1;i>=pos;i--){
      arr[i+1]=arr[i];
    }
    arr[pos]=value;
    printf("After insertion the array element is :\n");
    for(int i=0;i<n;i++){
      printf("%d  ",arr[i]);
    }
  }
  return 0;
}