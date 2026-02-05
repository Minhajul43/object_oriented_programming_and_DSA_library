#include<stdio.h>
int main()
{

  printf("This is a program of insertion or add element in array at first position\n");
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
    int arr[n];
  printf("---------Enter the array element:---------\n");
  for(int i=0;i<n;i++){
    printf("Enter the element no.%d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Before insertion the array element is:\n");
    for(int i=0;i<n;i++){
      printf("%d  ",arr[i]);
    }
    int value;
    printf("\n Enter the insert value:");
    scanf("%d",&value);
    for(int i=n-1;i>=0;i--){
      arr[i+1]=arr[i];
    }
    arr[0]=value;
    n=n+1;
    printf("After insertion the array element is:\n");
    for(int i=0;i<n;i++){
      printf("%d  ",arr[i]);
    }
    return 0;

}