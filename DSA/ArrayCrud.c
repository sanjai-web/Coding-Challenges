#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>

void add(int a[],int size, int o, int p,int e){
printf("Position  and element : ");
scanf("%d %d",&p,&e);
for(int i=size;i>=p;i--){
    a[i]=a[i-1];
       
}

a[p]=e;
size++;

for(int i=0;i<=size;i++){
    printf("%d infex in %d element\n",i,a[i]);
}
}

void delete(int a[],int size, int p){

printf("Position  :");
scanf("%d",&p);
for(int i=p;i<size-1;i++){
printf("running:\n");
    a[i]=a[i+1];
       
}

size--;
printf("Updated array after deletion:\n");

for(int i=0;i<size;i++){
    printf("%d infex in %d element\n",i,a[i]);
}

}


int main(){

int a[]={1,2,3,4,5,6};
int size=sizeof a/ sizeof a[0];
int o,p,e;
printf("Enter the option : ");
scanf("%d",&o);

switch (o){
case 1: 

add(a,size,o,p,e);
break;
case 2:

delete(a,size,p);
break;}
    return 0;
}

