#include<stdio.h>
void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int Loc=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[Loc]){
        Loc=j;
        int temp=arr[i];
        arr[i]=arr[Loc];
        arr[Loc]=temp;
      }
    }
  } 
}
int main()
{ XY:
  printf("--------This is a selection sort program.How many numbers do you want to sort?\n");
  int n;
  printf("Please enter  the number:");
  scanf("%d",&n); 
  int arr[n];          // initialize an array
  printf("--------Enter the elements of array:---------\n");
  for(int i=0;i<n;i++){
    printf("Enter element no.%d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("This is a unsorted data list that you are given-----:\n");
  for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
  selectionSort(arr,n);
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
