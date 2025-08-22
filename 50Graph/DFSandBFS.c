#include <stdio.h>
#include<stdlib.h>


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
    newNode->matrix[i]=(int*)malloc(sizeof(int)*val);
    for(int j=0;j<val;j++){
      newNode->matrix[i][j]=0;
    }
  }
  
  return newNode;
}


void allocation(node* newNode,int s,int d){
  newNode->matrix[s][d]=1;
}

void printBFS(node* newNode){
  
  
}


void printDFS(node* newNode,int k,int visited[]){
  printf("%d ",k);
  visited[k]=1;
  
  for(int i=0;i<newNode->data;i++){
    if(newNode->matrix[k][i]==1 && !visited[i]){
      printDFS(newNode,i,visited);
    }
  }
  
}


int main()
{
     int v = 5;
    node* graph = create(v);

    
    allocation(graph, 4, 1);
    allocation(graph, 4, 2);
    allocation(graph, 1, 2);
    allocation(graph, 2, 4);
    allocation(graph, 2, 3);
    allocation(graph, 3, 3);
    int visited[127] = {0};

    printf("DFS Code\n");
    printDFS(graph,v-1,visited);

    return 0;
}