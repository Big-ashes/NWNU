#include <stdio.h>

void trace(int A[],int count){
    for (int i = 0; i < count; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void BubbleSort(int A[],int count){
    int flag = 1,temp;
    while(flag==1){
        flag = 0;
        for (int i = 1; i < count; i++){
            if(A[i-1] > A[i]){
                temp = A[i];
                A[i] = A[i-1];
                A[i-1] = temp;
                flag = 1;
            }
        }
        trace(A,count);
    }
}

int main(){
    int count ;
    int A[100];
    scanf("%d",&count);

    for (int i = 0; i < count; i++){
        scanf("%d",&A[i]);
    }
    trace(A,count);
    BubbleSort(A,count);
    
    return 0;
}