#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
    while(fast!=NULL && fast->next!=NULL)
   {
       fast=fast->next->next;
     slow=slow->next;
     
     
     
   }
   printf("%d",slow->data);

}

int main(){
    int a[]={10,20,30,40,50,60};
    int len=sizeof a/sizeof a[0];
    int i=0;
    while(i < len - 1){
      int n=a[++i];
        insert(n);
        
    }

    display();
}