#include<stdio.h>

void printArray(int* A, int n){
   for(int i = 0; i < n; i++){
        printf(" %d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int low, int mid, int high){
    int i,j,k,B[100];
    i = low;
    j = mid+1;
    k = low;

    while(i<=mid && j<=high){
        if(A[i] < A[j]){
            B[k] = A[i];
            i++;
            k++;
        }
        else{
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k] = A[i];
            i++;
            k++;
    }
    while(j<=high){
            B[k] = A[j];
            j++;
            k++;
        }
        for(int i = low; i<=high; i++){
            A[i] = B[i];
        }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);

        merge(A, low, mid, high);
    }

}

int main()
{
    int n;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    printf("\nUnsorted Array: ");
    printArray(A, n);

    printf("Running Merge sort...\n");
    mergeSort(A, 0, n-1);

    printf("\nSorted Array: ");
    printArray(A,n);
    return 0;
}
