#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int k=0,c=0;
int main(){

int nums[]={3, 2, 1, 2};
int size = sizeof nums/sizeof nums[0] ;
int* result=(int*)malloc(size * sizeof (int));
// printf("%d",size);

int n=(size*(size+1))/2;
int temp=0;

for(int i=0;i<=size-1;i++){
    temp+=nums[i];
}

// printf("temp : %d\n",temp);
int res=n-temp;

for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(nums[i]==nums[j]){
            printf("repeated : %d\n",nums[i]);
            c=nums[i];
            result[++k]=c;
            break;
        }
    }
}
printf("missing : %d",res+c);
result[++k]=res+c;

    return result;
}

