#include<stdio.h>>
#include<stdlib.h>
#include<string.h>

struct lnode{
    int data;
    int** matrix;
};

typedef struct lnode node;

node* create(int val){
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=val;
    newNode->matrix=(int**)malloc(sizeof(int*)*val);

    for(int i=0;i<val;i++){
        newNode->matrix[i]=(int)malloc(sizeof(int)*val);
        for(int j=0;j<val;j++){
            newNode->matrix[i][j]=0;
        }
    }

    return newNode;
}


void matconnection(node* graph,int s,int d){

    newNode->matrix[s][d]=1;
    newNode->matrix[d][s]=1;  // remove this for the directed graph;
}


void print(node* node)
{
    int n=node->data;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",node->matrix[i][j]);
        }printf("\n");
    }




}



int main(){

node* graph=create(5);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);



    print(graph);

}