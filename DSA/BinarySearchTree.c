#include<stdio.h>
#include<stdlib.h>

struct lnode{
    int data;
    struct lnode* left;
     struct lnode* right;
};

typedef struct lnode node;

node* root =NULL;

node* insert(node* root,int val){
    if(root==NULL){
        node* newNode=(node* )malloc(sizeof(node));
        newNode->data=val;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
    if(val< root->data){
        root->left=insert(root->left,val);
    }else if (val > root->data){
        root->right=insert(root->right,val);

    }
    return root;
}



void inorder(node* root){
    if (root == NULL) {
        return;
    }
     
}


void postorder(node* root){
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

void preorder(node* root)
{ if (root == NULL) {
        return;
    }
      printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int len=sizeof (a)/sizeof (a[0]);

    for(int i=0;i<len;i++){
   root=insert(root,a[i]);
    }

  inorder(root);
  printf("\n");
  postorder(root);
   printf("\n");
  preorder(root);

}