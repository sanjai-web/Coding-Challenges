
#include <stdio.h>
#include<stdlib.h>

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


void reverse(){
    node* current=head;
    node* next=NULL;
    node* prev=NULL;
    
    while(current!=NULL ){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    
    node* temp=prev;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

int main() {
   
   int n;
   
   printf("Enter the limit ");
   scanf("%d",&n);
   
   int a;
   for(int i=0;i<n;i++){
       scanf("%d",&a);
       insert(a);
   }
   
   
//   while(scanf("%d",&n)==1){
//       insert(n);
//   }

    reverse();
    return 0;
}