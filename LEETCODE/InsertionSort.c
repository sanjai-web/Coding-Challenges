#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int arr[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

int n= sizeof arr/sizeof arr[0];


for(int i=1;i<n;i++){
    int key=arr[i];

    int j=i-1;
    while( arr[j]>key && j>=0 ){
        arr[j+1]=arr[j];
        j--;
    }

    arr[j+1] =key;
}





for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}

    return 0;
}
