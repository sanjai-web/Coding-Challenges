#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct lnode{
    int data;
    struct lnode* next;
    struct lnode* prev;
};
typedef struct lnode node;
node* head=NULL;
node* tail=NULL;
node* prev=NULL;


void insert(int val){
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        
    }else{
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}

void display(){
    node* current=tail;
   
    while(current!=NULL){
        
        printf("%d",current->data);
        current=current->prev;
    }
}


int main() {
    int a=1;
    while(1){
        scanf("%d",&a);
        if(a==-1){
            break;
        }
        insert(a);
    }
display();

    return 0;
}