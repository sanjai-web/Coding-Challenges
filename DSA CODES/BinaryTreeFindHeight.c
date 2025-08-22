#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode* right;
    struct lnode* left;
};

typedef struct lnode node;
node* root = NULL;

node* insert(int val) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}

void levelorder(node** root, int val) {
    node* temp = insert(val);
    if (*root == NULL) {
        *root = temp;
        return;
    }

    node* queue[100];
    int rear = 0, front = 0;
    queue[rear++] = *root;
    while (front < rear) {
        node* current = queue[front++];

        if (current->left == NULL) {
            current->left = temp;
            return;
        } else {
            queue[rear++] = current->left;
        }

        if (current->right == NULL) {
            current->right = temp;
            return;
        } else {
            queue[rear++] = current->right;
        }
    }
}


int height(node* root) {
    if (root == NULL) return 0;
    
    node* left = root->left;
    node* right = root->right;
    int l = 0, r = 0;
 
    while (left != NULL) {
        l++;
        left = left->left;  
    }
  
    while (right != NULL) {
        r++;
        right = right->right;  
    }
    
    return 1 + (l > r ? l : r);
}

int main() {
    int a[]={1,2,3,4,5,6,7,2};
    int len=sizeof a/sizeof a[0];
    
    for(int i=0;i<len;i++){
        levelorder(&root,a[i]);
    }

    printf("%d", height(root));

    return 0;
}