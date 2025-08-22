#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lnode {
    int data;
    struct lnode* next;
};

typedef struct lnode node;
node* head=NULL;

void InsertAtBeginning(int val){
  node* newNode=(node*)malloc(sizeof(node));
    newNode->data=val;

    
    if (head ==NULL){
        newNode->next =NULL;
        head=newNode;

    }else{
        newNode->next=head;
head =newNode;
    }
}


void display(){
    node* temp = head;
    printf("Elements in the list are : ");
   while (temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;

   }


}


void odd(){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data%2!=0){
            printf("%d",temp->data);
        }
        temp=temp->next;
    }
}





int main()
{

    int j = 0;
    int n,c;
    while (1)
    {
        printf("\n1,insert at begining:\n2:Display\n3,insetr\n4.delete \n5.odd\n");
        printf("Enter Your Choice : ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:

            printf("Enter the value at the beginning: ");
            scanf("%d", &n);
            InsertAtBeginning(n);
            printf("value Inserted\n");
            break;
        case 2:

            printf("Display: ");
            // scanf("%d",n);
            display();
            break;
        case 3:
            printf("Insert value: ");
            // insert();
            break;

        case 4:
            printf("delete the element : ");
            // delete();
            break;
        
            case 5:
            printf("odd the element : ");
            odd();
            break;
        
      
        default:
            exit(0);
        }
    }
    return 0;
}

