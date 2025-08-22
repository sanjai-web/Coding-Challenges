// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int k=3;
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
    node* current=head;
   
    while(current!=NULL){
        
        printf("%d",current->data);
        current=current->next;
        
    }
}



node* reversek(){
    node* current=head,prev=NULL,next=NULL;
    int count=0;

    node* temp=head;
 for(int i=0;i<k;i++){
    if(!temp) return head;
     temp=temp->next;
 }
   
while(current && count <k){
   
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}

if(next){
    head->next=reversek(next,k);
}

return prev;
}

int main() {
    int a[]={1,2,3,4,5,-1};
    int i=0;
    while(1){
        
        if(a[i]==-1){
            break;
        }
        insert(a[i]);
        i++;
    }
display();



    return 0;
}