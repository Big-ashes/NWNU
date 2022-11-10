#include <stdio.h>

int main(){
    char c,s[]="ABCDEFGH";
    for(int k=0;k<4;k++){
        c=s[k];
        s[k]=s[7-k];
        s[7-k]=c;
    }
    printf("%s\n",s);
    return 0;
}