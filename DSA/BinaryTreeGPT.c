#include <stdio.h>
#include <stdlib.h>

struct tnode {
    int data;
    struct tnode* left;
    struct tnode* right;
};

typedef struct tnode node;

node* root = NULL;

// Function to insert into the binary tree (level-order insertion)
void insert(node** root, int val) {
    // Create the new node directly within this function
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;

    if (*root == NULL) {
        *root = newNode;
        return;
    }

    // Use a queue to perform level-order traversal and find the first empty spot
    node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = *root;

    while (front < rear) {
        node* temp = queue[front++];

        // Check if left child is empty
        if (temp->left == NULL) {
            temp->left = newNode;
            return;
        } else {
            queue[rear++] = temp->left;
        }

        // Check if right child is empty
        if (temp->right == NULL) {
            temp->right = newNode;
            return;
        } else {
            queue[rear++] = temp->right;
        }
    }
}

// In-order traversal to display the binary tree
void inOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

int main() {
    int a[]={1,2,3,4,5,6,7};
    int i=0;
    while (1) {
        scanf("%d", &a[i]);
        if (a == -1) {
            break;
        }
        insert(&root, a);
        i++;
    }

    printf("In-order Traversal of the Binary Tree:\n");
    inOrderTraversal(root);

    return 0;
}
