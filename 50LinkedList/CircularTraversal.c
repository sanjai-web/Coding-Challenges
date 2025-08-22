#include<stdio.h>
#include<stdlib.h>

struct lnode()
{
    int data;
    struct lnode* next;
};
typedef struct lnode node;
node* head=NULL;
node* tail=NULL;

void insert(int val){
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }else{
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
    }
}


void display(){
    node* current=head;
    node* temp=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
        if(current==temp) break;
    }
}


int main(){
int a[]={1,3,4,5,6,7,8,9,0};
for(int i=0;i<(sizeof a /sizeof a[0]);i++){
    insert(a[i]);
}


display();
}
