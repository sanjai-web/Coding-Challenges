#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int arr[]={2,3,4,5,6,4,3,5};
int len=sizeof arr/sizeof arr[0],pod=2;


void Insert(int pos,int val){
for(int i=len-1;i>=5;i--){
    arr[i+1]=arr[i];
}
arr[pos]=10;
len++;

for(int i=0;i<=len;i++){
    printf("%d == %d\n",i,arr[i]);
}
}

int main(){
    
int pos=5,val=10;
Insert(pos,val);
printf("------------------------------\n");

for (int j = pod; j < len - 1; j++) {
    arr[j] = arr[j + 1]; 
}
len--; 

for (int i = 0; i < len; i++) {
    printf("%d == %d\n", i, arr[i]);
}
    return 0;
}

