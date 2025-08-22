#include<stdio.h>
#include<stdlib.h>

struct lnode{
    int data;
    struct lnode* next;
};

typedef struct lnode node;

node* head=NULL;
node* tail=NULL;

void insert(int val){
    node* newNode=(node* )malloc(sizeof(node));
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


void display() {
    node* current = head;
    
    while(current != NULL) {
        printf("%d ", current->data); 
        
        
        if(current->next != NULL && current->next->next != NULL) {
            
            if(current->next->data == current->next->next->data) {
                current = current->next->next;
                continue;
            }
        }
        current = current->next;
    }
    printf("\n");  
}


int main(){
    int a[]={1,2,3,3,4,5,5};
    int len=sizeof a/sizeof a[0];
    for(int i=0;i<len;i++){
        insert(a[i]);
    }

    display();
}