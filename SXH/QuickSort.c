#include <stdio.h>

int partition(int A[],int low,int high){
    int pivot = A[low];
    while(low<high){
        while(low < high && A[high]>=pivot) --high;
        A[low] = A[high];
        while(low < high && A[low] <=pivot) ++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void QuickSort(int A[],int low,int high){
    if(low<high){
        int pivotpos = partition(A,low,high);
        QuickSort(A,low,pivotpos-1);
        QuickSort(A,pivotpos+1,high);
    }
}

int main(){

    return 0;
}
