#include <stdio.h>

int main(){
    int x[] ={1,2,3,4};
    int s,i,*p;
    p = x;
    for(s=1,i=0;i<4;i++){
        s *= *(p+i);
    }
    printf("s=%d",s);
}
