
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



void reverse(int s, int e){
    
   node* current=head;
   node* prev=NULL;
  int  i=1;
   while(current!=NULL && i<=s){
       prev=current;
       current=current->next;
       i++;
   }
     node* tail=current;
     node* prevst=prev;
     node* temp=current;
     node* next=NULL;
     printf(" first temp %d\n",temp->data);
    
    while(temp!=NULL && i <=e+1 ){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        i++;
    }
        prevst->next=prev;
        tail->next = temp;  
       
    printf(" temp %d\n",temp->data);
    
    node* temps=head;
    while(temps!=NULL) {
        printf("%d ",temps->data);
        temps=temps->next;
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

    reverse(2,5);
    return 0;
}