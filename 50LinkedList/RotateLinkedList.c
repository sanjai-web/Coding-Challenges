#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    node* newNode=(node* )malloc(sizeof (node));
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=NULL;

    if(head==NULL){
        head=newNode;
        tail=newNode;
        tail->next=head;
        head->prev=tail;
    }
    else{
        tail->next=newNode;
        tail=newNode;
         tail->next=head;
        head->prev=tail;
    }


void display(int k){
    node* current=head;
    for(int i=1;i<=k;i++){
        current=current->next;
    }

    tail->next=NULL;
    head->prev=NULL;

    node* temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }

}


}


int main(){
    int a[]={1,2,3,4,5,6,7};
    int len=sizeof a/sizeof a[0];
    int n,i=0;
    int k=4;
    while(i<=len){
        n=a[i];
        insert(n);
        i++;
    }
display(k);
    
}