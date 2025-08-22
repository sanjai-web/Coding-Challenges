#include<stdio.h>
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
  newNode->matrix=(int**)malloc(val* sizeof(int*));
  
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



void print(node* newNode){
  
  int n=newNode->data;
  
  for(int i=0;i<n;i++){
    printf("%d-->",i);
    for(int j=0;j<n;j++){
      if(newNode->matrix[i][j]==1){
        printf("%d ",j);
      }
    }printf("\n");
  }
  
  
}



int main(){
  
  int v=4;
  
 int  edges[][2]= {{0, 1}, {1, 2}, {1, 3}, {2, 3}, {3, 0}};
 
  node* graph=create(v);
  
  int mSize=sizeof(edges)/sizeof(edges[0]);
  int sSize=sizeof(edges[0])/sizeof(edges[0][0]);
  
  for(int i=0;i<mSize;i++){
  
      allocation(graph, edges[i][0], edges[i][1]); 

  
  }
  
  
  print(graph);
  
}