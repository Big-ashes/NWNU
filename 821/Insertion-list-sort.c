#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct LNode{
    int data;
    struct LNode *next; 
}LNode,*Linklist;

LNode * initl(){
    LNode * H = (LNode*)malloc(sizeof(LNode));
    LNode * temp = H;
    srand((unsigned)time(NULL));

    for(int i = 5;i > 1;i--){
        LNode *p = (LNode*)malloc(sizeof(LNode));
        p->data = rand()%10;
        // p->data = i;
        p->next = NULL;
        temp->next = p;
        temp = temp->next;
    }

    return H;
}

void trace(LNode *H){
    LNode *p = H;
    while(p->next){
        p = p->next;
        printf("%d ",p->data);
    }
    printf("\n");
}

void Insertsort(LNode *H){
    LNode *p = H->next;
    LNode *q = p->next;
    p->next=NULL;
    p=q;
    while(p!=NULL){
        q = p->next;
        LNode *pre = H;
        while(pre->next!=NULL && pre->next->data < p->data) pre = pre->next;   
        p->next = pre->next;
        pre->next = p;
        p = q;
    }
    trace(H);
}

int main(){
    LNode *H = initl();
    trace(H);

    Insertsort(H);
    return 0;
}