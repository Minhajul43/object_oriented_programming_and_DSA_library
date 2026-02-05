#include<stdio.h>
void BubbleSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}
void printList(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }
}
int main()
{
  printf("This is a sorted program .YOu can sorted data of list by using this program \n");
  int n;
  printf("\t Enter the list number:");
  scanf("%d",&n);
  int arr[n];
  printf("\t Now enter the member of list-----\n");
  for(int i=0;i<n;i++){
    printf("Enter member no.%d: ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("\nThis is a unorder list that you already given\n");
  printList(arr,n);
  printf("---\t\nThis a order list that you want--\n");
  BubbleSort(arr,n);
  printList(arr,n);
  return 0;
  
}