//manual
#include <stdio.h>
#include<stdlib.h>

struct lnode {
    int data;
    struct lnode* left;
    struct lnode* right;
};

typedef struct lnode node;
node* root=NULL;
node* insert(int val){
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void levelorder(node* *root,int val){
    node* temp=insert(val);
    if(*root==NULL) {
        *root =temp;
        return;
    }
    
    node* queue[100];
    int rear=0,front=0;
    
    queue[rear++]=*root;
    while(front<rear){
        node* current=queue[front++];
        
        if(current->left==NULL){
            current->left=temp;
            return;
        }else{
            queue[rear++]=current->left;
        }
        
        
        if(current->right==NULL){
            current->right=temp;
            return;
        }else{
        queue[rear++]=current->right; 
        }
    }
    
}


void preorder(node* root){
    if(root==NULL) return;
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}


void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}


void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}


void level(node* root){
    if(root==NULL) return;
    
    node* queue[100];
    int front=0,rear=0;
    
    queue[rear++]=root;
    while(front<rear){
        node* current=queue[front++];
        printf("%d",current->data);
        
        if(current->left!=NULL){
            queue[rear++]=current->left;
        }
        if(current->right!=NULL){
            queue[rear++]=current->right;
        }
    }
}

int main() {
    int a[]={1,2,3,4,5,67,8,9};
    int len=sizeof a/sizeof a[0];
    
    for(int i=0;i<len;i++){
        levelorder(&root,a[i]);
    }
   
   printf("levelorder\n");
   level(root);
   
   printf("\n\nperorder\n");
   preorder(root);
   
   printf("\n\npost oredr\n");
   postorder(root);
   
   printf("\n\ninorder\n");
   inorder(root);
   
    return 0;
}