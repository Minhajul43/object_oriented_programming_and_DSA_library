#include<stdio.h>
// create a function for insertion sort
void insertionSort(int arr[],int n){
  for(int i=1;i<n;i++){
    int k=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>k){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=k;
  }

}
int main()
{ XY:
  printf("--------This is a insertion sort program.How many numbers do you want to sort?\n");
  int n;
  printf("Please enter  the number:");
  scanf("%d",&n); 
  int arr[n];          // initialize an array
  printf("--------Enter the elements of array:---------\n");
  for(int i=0;i<n;i++){
    printf("Enter element no.%d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("This is a unsorted data that you are given-----:\n");
  for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  insertionSort(arr,n);
  printf("\n Now  sorting this unsorted data in below:\n");
  for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  printf("\n This program is successfully run----\n    Do you want to try again? If yes press 1 else 0:");
  int a;
  scanf("%d",&a);
  if(a==1){
    goto XY;
  }
  else 
  printf("Thank you for using this program\n");
  return 0;
}