#include <stdio.h>

void trace(int *A, int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int count) { // *A == A[]
    int j, v;
    for (int i = 1; i < count; i++) {
        v = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > v) {
        A[j + 1] = A[j];
        j--;
    }
    A[j + 1] = v;
    trace(A, count);
  }
}

int main() {
    int arr[100]={0};
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }
    trace(arr, count);
    insertionSort(arr, count);
    return 0;
}
