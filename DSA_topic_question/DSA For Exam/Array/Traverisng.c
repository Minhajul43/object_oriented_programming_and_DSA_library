#include<stdio.h>
int main()
{
  int arr[]={12,53,65,76,86};
  int n =sizeof(arr)/sizeof(arr[0]);
  printf("\n-- traversing the array element!!--\n");
  for(int i=0;i<n;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
  }
  return 0;
}