#include <stdio.h>
#include<stdlib.h>


struct lnode{
  int data;
  struct lnode* left;
  struct lnode* right;
};

typedef struct lnode node;

node* root=NULL;

node * insert (int val,node* root){
  
  if(root==NULL){
  node* newNode=(node*)malloc(sizeof(node));
  newNode->data=val;
  newNode->right=NULL;
  newNode->left=NULL;
  return newNode;
}

    if(val<root->data){
      root->left=insert(val,root->left);
     
    }else if(val>root->data){
      root->right=insert(val,root->right);
     
    }

  return root;

}


int heighttree(node* root){
  if(root==NULL){
    return -1;
  }
  
  int left=heighttree(root->left);
  int right=heighttree(root->right);
  
  return 1+(left>right?left:right);
  
  
}


int main()
{
    int a[]={1,2,3,4,5,6,7};
    int len=sizeof (a)/sizeof (a[0]);

    for(int i=0;i<len;i++){
   root=insert(a[i],root);
    }
    
    printf(" height of tree : %d",heighttree(root));
    
    
    
}