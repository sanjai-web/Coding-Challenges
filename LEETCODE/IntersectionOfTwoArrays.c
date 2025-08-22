#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int nums1[]={4,9,5};
int nums2[]={9,4,9,8,4};

int len1=sizeof nums1/sizeof nums1[0];
int len2=sizeof nums2/sizeof nums2[0];

for(int i=0;i<len1;i++){
    for(int j=0;j<len2;j++){
        if(nums1[i]==nums2[j]){
            printf("%d == %d :\n",nums1[i],nums2[j]);
            break;
        }
    }
}
    return 0;
}

