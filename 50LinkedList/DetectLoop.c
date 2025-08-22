#include<stdlib.h>
#include<stdio.h>

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
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            printf("Loop detected\n");
            return;
        }
    }
    printf("No loop found\n");

   }




int main(){
   int a[]={1,2,3,4,5,6};
    int len=sizeof a/sizeof a[0];

    for(int i=0;i<len;i++){
        insert(a[i]);
    }


    display();
}