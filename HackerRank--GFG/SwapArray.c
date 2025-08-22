#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){


    int nums[5]={1, 2, 3, 4, 5};
    int n= sizeof nums/sizeof nums[0];
    int temp=0;
for(int i=0;i<n-2;i++){
    temp= nums[i];
    nums[i]=nums[i+2];
    nums[i+2]=temp;

}

for(int i=0;i<n;i++){
    printf("%d ",nums[i]);
}


    return 0;
}

