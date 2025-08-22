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

void display() {
    node* current = head;
    while (current != NULL) {
        if (current->next != NULL && current->next->next == NULL) {
            current = current->next;
            continue;
        }
        printf("%d", current->data);
        current = current->next;
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