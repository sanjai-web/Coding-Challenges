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
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(node* root){
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void preorder(node* root){
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void levelOrder(node* root){
    if (root == NULL) {
        return;
    }

    node* queue[100];  // Assuming a maximum of 100 nodes in the tree.
    int front = 0, rear = 0;

    queue[rear++] = root;  // Enqueue root.

    while (front < rear) {
        node* current = queue[front++];  // Dequeue a node.

        printf("%d ", current->data);

        if (current->left != NULL) {
            queue[rear++] = current->left;  // Enqueue left child.
        }
        if (current->right != NULL) {
            queue[rear++] = current->right;  // Enqueue right child.
        }
    }
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < len; i++){
        root = insert(root, a[i]);
    }

    printf("Inorder Traversal:\n");
    inorder(root);
    printf("\nPostorder Traversal:\n");
    postorder(root);
    printf("\nPreorder Traversal:\n");
    preorder(root);
    printf("\nLevel-order Traversal:\n");
    levelOrder(root);

    return 0;
}
