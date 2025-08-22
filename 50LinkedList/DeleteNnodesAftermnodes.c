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

void display(int m, int n) {
    node* current = head;
    node* prev = NULL;

    while (current != NULL) {
        
        for (int i = 0; i < m && current != NULL; i++) {
            prev = current;
            current = current->next;
        }

        // Delete the next n nodes
        for (int i = 0; i < n && current != NULL; i++) {
            node* temp = current;
            current = current->next;
            free(temp);
        }

        // Connect the remaining part of the list
        if (prev != NULL) {
            prev->next = current;
        }
    }
}


int main(){
    int c;
    printf("value of c: ");
    scanf("%d",&c);

    int a[c];
    for(int i=0;i<c;i++){
        scanf("%d",&a[i]);
        insert(a[i]);
    }

    int m,n;
    printf("Enter n value : ");
    scanf("%d",&n);
     printf("Enter m value : ");
    scanf("%d",&m);
}