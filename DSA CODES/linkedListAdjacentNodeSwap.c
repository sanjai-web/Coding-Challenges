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
    node* current=head;
  
    while(current!=NULL && current->next!=NULL){
      
        
        int temp=current->data;
        current->data=current->next->data;
        current->next->data=temp;
        
        printf("%d%d",current->data,current->next->data);
        current=current->next->next;
        if(current==head){
            break;
        }
        
      
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