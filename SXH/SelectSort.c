#include <stdio.h>

int selectisort(int A[],int count){
    int sw=0;
    for(int i = 0; i < count-1;i++){
        int minj = i;
        for(int j = i; j < count; j++){
            if(A[j]<A[minj]) minj = j;
        }
        int temp = A[i];
        A[i] = A[minj];
        A[minj] = temp;
        if(i != minj) sw++;
    }
    return sw;
}


int main(){
    int A[100],count,sw;
    scanf("%d",&count);
    for(int i = 0; i < count; i++){
        scanf("%d",&A[i]);
    }
    sw = selectisort(A,count);
    for(int i = 0; i < count; i++){
        if(i > 0) printf(" ");
        printf("%d",A[i]);
    }
    printf("\n");
    printf("%d\n",sw);
    return 0;

}