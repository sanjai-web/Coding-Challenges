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
node* newNode=(node*)malloc(sizeof (node));
newNode->data=val;
newNode->next=NULL;
if(head==NULL){
    newNode->next=NULL;
    head=newNode;
}else{
     newNode->next=head;
     head=newNode;
}
}

void display(int k){
node* current=head;
for(int i=0;i<k;i++){
    current=current->next;
}

printf("%d",current->data);
}
int main(){
    int a[]={1,2,3,4};
    int len=sizeof a/sizeof a[0];
    int i=0,k=3;
    while(i<=len){
        insert(a[i]);
        i++;
    }
    display(k);
}