
#include <stdio.h>
#include<stdlib.h>
 int n;
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
    
    node* temp = prev;
     printf("\n");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    prev=head;

}

void insertAtPosition(int val,int pos){
    node* newNode=(node*)malloc(sizeof(node));
    node* current=head->next;
    int i=1;
    node* prev=head;
    
    if(head==NULL || pos > n+1) return;
    if(pos==n+1){
        newNode->data=val;
        tail->next=newNode;
        tail=newNode;
        n++;
    }else{
    while(current!=NULL){
        if(i==pos){
            newNode->data=val;
            prev->next=newNode;
            newNode->next=current;
            
            prev=current;
            current=current->next;
            
        }
        
        else{
            prev=current;
            current=current->next;
        }
        i++;
    }
    }
     node* temp = head;
     printf("\n");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}


void   occurance(int val){
   node* current=head->next;
    
    node* prev=head;
    
    while(current!=NULL){
        if(current->data==val){
            prev->next=current->next;
            current=current->next;
        }else{
            prev=current;
            current=current->next;
        }
        
    }
    
     node* temp = head;
     printf("\n");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


void   deletepos(int pos){
    node* current=head->next;
    
    node* prev=head;
    int i=1;
     node* tprev=tail;
    if(pos==n){
       
        while(tprev->next->next!=NULL){
            tprev=tprev->next;
        }
        
        tprev->next=NULL;
        
    }else{
    while(current!=NULL){
        if(i==pos){
            prev->next=current->next;
            current=current->next;
        }else{
            prev=current;
            current=current->next;
        }
        i++;
    }
    }
     node* temp = head;
     printf("\n");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    n--;
}



int main() {
   
  
   
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


   while(1){
       int ch;
       printf("\n1. Insert at position \n 2. delete occurance \n 3. Delete from position \n 4.reverse \n Enter the choice: ");
       scanf("%d",&ch);
       switch(ch){
        case 1:
           int val,pos;
           printf("enter the value and position: ");
           scanf("%d %d",&val,&pos);
           insertAtPosition(val,pos);
           break;
        case 2:
           int o;
            printf("enter the occurance ");
           scanf("%d",&o);
           occurance(o);
            break;
        case 3:
            int l;
            printf("enter the position to delete ");
           scanf("%d",&l);
           deletepos(l);
            break;
            
        case 4:
             printf("Reverse List");
             reverse();
             break;
             
         default :
         return 0;
       }
   }

    
    //  printf("\nOccurance ");
    // occurance(4);
    
    // printf("\nDelete form position ");
    // deletepos(2);
    //  printf("reverse ");
    // reverse();
    return 0;
}