#include<stdio.h>
int main()
{
  printf("This is a program of deletion of first element in array\n");
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int arr[n];
  printf("-------Enter the array element -------\n");
  for(int i=0;i<n;i++){
    printf("Enter the element no.%d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Before deletion the array element is :\n");
  for(int i=0;i<n;i++){
    printf("%d   ",arr[i]);
  }
  for(int i=0;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  n--;
  printf("\n After deletion the array element is :\n");
  for(int i=0;i<n;i++){
    printf("%d   ",arr[i]);
  }
  return 0;
}