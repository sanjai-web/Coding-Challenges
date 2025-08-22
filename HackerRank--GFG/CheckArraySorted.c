#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
// int arr[]={90, 80, 100, 70, 40, 30};
int arr[]={10, 20, 30, 40, 50};
int len=sizeof arr/sizeof arr[0];
int c=0;
for(int i=1;i<len;i++){
if(arr[i]<arr[i-1]){
 printf("false");
 break;
}
else if (arr[i]==arr[i-1] || arr[i]>arr[i-1]){
    // printf("true");
    c++;
}
}


if(c==len-1){
printf("True");
}


    return 0;
}

