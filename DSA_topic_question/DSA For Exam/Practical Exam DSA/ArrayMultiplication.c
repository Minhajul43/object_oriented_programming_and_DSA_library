// 2D array multiplication in C. give the input from user .
#include<stdio.h>
int main(){
  printf("Enter the number of rows and columns for A matrix:\n");
  int r1,c1;
  scanf("%d  %d",&r1,&c1);
  printf("Enter the number of rows and columns for B matrix:\n");
  int r2,c2;
  scanf("%d   %d",&r2,&c2);
  // initialize C matrix
  int C[r1][c2];
  if(c1!=r2){
    printf("Matrix multiplication not possible\n");
  }
  else{
    // initialize A matrix
    int A[r1][c1];
    printf("Enter the elements of A matrix:\n");
    for(int i=0;i<r1;i++){
      for(int j=0;j<c1;j++){
        printf("Enter element A[%d][%d]: ",i,j);
        scanf("%d",&A[i][j]);
      }
    }
    // initialize B matrix
    int B[r2][c2];
    printf("Enter the elements of B matrix:\n");
    for(int i=0;i<r2;i++){
      for(int j=0;j<c2;j++){
        printf("Enter element B[%d][%d]: ",i,j);
        scanf("%d",&B[i][j]);
      }
    }
    // multiply A and B to get C matrix
    for(int i=0;i<r1;i++){
      for(int j=0;j<c2;j++){
        C[i][j]=0;
        for(int k=0;k<c1;k++){
          C[i][j]+=A[i][k]*B[k][j];
        }
      }
    }
  }
  // print C matrix
  printf("Resultant matrix C after multiplication:\n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
