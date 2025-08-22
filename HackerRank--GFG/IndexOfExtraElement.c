#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int a[]={2,4,6,8,9,10,12};
int b[]={2,4,6,8,10,12};
int sa=sizeof a/sizeof a[0];
int sb=sizeof b/sizeof b[0];
for(int i=0;i<=sa;i++){
    
        if(a[i]!=b[i]){
        printf("%d === %d\n",a[i],i);
        break;
        
        }
    }

    return 0;
}

