#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;

LNode * initlist(){
    LNode *H = (LNode *)malloc(sizeof(LNode));
    LNode *temp = H;
    srand((unsigned)time(NULL));

    for(int i = 0;i <5;i++){
        LNode *p = (LNode *)malloc(sizeof(LNode));
        p->data = rand()%10;
        p->next = NULL;
        temp->next = p;
        temp=temp->next;
    }
    return H;
}

void display(LNode *H){
    LNode *temp = H;
    while(temp->next){
        temp=temp->next;
        printf("%d ",temp->data);
    }
    printf("\n");
}

void Isort(LNode *H){
    LNode *dummy = (LNode*)malloc(sizeof(LNode));
    dummy->data=0;
    dummy->next=H;
    LNode *p =H;
    LNode *q = H->next;
}

int main(){
    printf("list:\n");
    LNode *H = initlist();
    display(H);


    return 0;
}