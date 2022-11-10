#include <stdio.h>
#include <stdbool.h>
#define SWAP(A,B) A ^= B ^= A ^= B

int main(){
    int a=8;
    int b=9;
    SWAP(a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
