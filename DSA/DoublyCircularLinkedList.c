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
        tail->next=head;
        head->prev=tail;
        
    }else{
        
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        tail->next=head;
        head->prev=tail;
    }
}

void display(){
    node* current=tail;
   node* temp=head;
    while(current!=NULL){
        printf("%d ",current->data);
        if(current==head){
            break;
        }
        current=current->prev;
    }
}

void freelist(){
    node* current=head;
    while(current!=NULL){
        node* temp=current;
        current=current->next;
        free(temp);
        
    }
    head=NULL;
    tail=NULL;
    prev=NULL;
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
// freelist();
    return 0;
}