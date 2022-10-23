#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand((unsigned)time(NULL));
    // int a = rand()%10;
    for(int i = 0; i<5;i++){
        printf("%d\n",rand()%10);
    }
    return 0;
}
