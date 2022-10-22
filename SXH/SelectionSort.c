#include <stdio.h>

void trace(int A[],int count){
    for (int i = 0; i < count; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void SelectionSort(int A[],int count){
    for(int i = 0; i < count-1 ; i++){
        int minj = i;
        for(int j = i; j < count; j++){
            if(A[j] < A[minj]) minj = j;         
        }
        int temp = A[i];
        A[i] = A[minj];
        A[minj] = temp; 
    trace(A,count);
    }
}

int main(){
    int A[100];
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++) {
        scanf("%d",&A[i]);
    }
    trace(A,count);
    SelectionSort(A,count);
    return 0;
}