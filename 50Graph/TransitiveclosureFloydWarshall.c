#include <stdio.h>
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
    newNode->matrix[i]=(int*)malloc(sizeof(int)* val);
    for(int j=0;j<val;j++){
      newNode->matrix[i][j]=0;
    }
  }
  return newNode;
}

void allocation(node* newNode,int s, int d){
  newNode->matrix[s][d]=1;
  // newNode->matrix[d][s]=1;
}

void transitive(node* newNode){
  int n=newNode->data;
  
  for(int i=0;i<n;i++){
    newNode->matrix[i][i]=1;
  }
  
  
  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(newNode->matrix[i][k] && newNode->matrix[k][j]){
          newNode->matrix[i][j]=1;
        }
      }
  }
}
}


void print(node* newNode){
  int n=newNode->data;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",newNode->matrix[i][j]);
    }printf("\n");
  }
}

int main()
{
    int v = 4;
    node* graph = create(v);

    
    allocation(graph, 0, 1);
    allocation(graph, 0, 2);
    allocation(graph, 1, 2);
    allocation(graph, 2, 0);
    allocation(graph, 2, 3);

    transitive(graph);
    print(graph);
    
    
    
}




