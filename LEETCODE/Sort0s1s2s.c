#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int arr[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

int n= sizeof arr/sizeof arr[0];





for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}


for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}

    return 0;
}

