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
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
int n=0;
void display(node* head,int k){
    node* current=head;
    while(current!=NULL){
        if(current->data==k && current->next!=NULL ){
            if(n==1){
            current=current->next;
            // printf("%d",current->data);
            
            }
            n++;
            
        }else{
            printf("%d",current->data);
        current=current->next;
            
        }
    }
    
    
    
}

int main(){
    int a[]={1,2,1,5,4};
    int k=1;
    int len=sizeof a/sizeof a[0];
    for(int i=0;i<len;i++){
        insert(a[i]);
    }


    display(head,k);
}