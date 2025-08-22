#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lnode{
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
   }
}


void display(){
    node* slow=head;
    node* fast=head;
  node* prev=NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
            slow=slow->next;
            fast=fast->next->next;
    }

   node* current=head;

   while(current!=NULL){
    printf("%d\n",current->data);
    if(current==prev){
        current=current->next->next;
    }else{
        current=current->next;
    }
   }


}
int main(){
    int a[]={1,2,3,4,5};
  int len=sizeof a/sizeof a[0];
    for(int i=0;i<len;i++){
        insert(a[i]);
    }


    display();
}