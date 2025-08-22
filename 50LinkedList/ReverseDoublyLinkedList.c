#include<stdio.h>
#include<stdlib.h>

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
    node* newNode=(node* )malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        
    }
    else{
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

int main(){
    int a[]={1,2,3,4,5,6,7};
    int i=0;
    int n,len=sizeof a/sizeof a[0];
    while(i<=len-1){
        n=a[i];
        insert(n);
        i++;
    }
    display();
}