#include<stdio.h>
#include<stdlib.h>

typedef struct lnode{
    int data;
    struct lnode* next;
}node;

node* head=NULL;
node* tail=NULL;

void insert(int val){
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL){
        newNode->next=NULL;
        head=newNode;
        
      

    }else{
        newNode->next=head;
        head=newNode;
    }
}

void display(){
    node* current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
    
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int n;
    int i=0;
int len=sizeof a/sizeof a[0];
    while(i<len){
        n=a[i];
        insert(n);
        i++;
    }
    display();
}