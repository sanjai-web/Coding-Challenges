#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){

int nums[]={1234,4567,345};
int a,b,c=0,e=0,d;

for(int i=0;i<3;i++){
printf("%d\n",nums[i]);
while(nums[i]>0){
nums[i]=nums[i]/10;
c++;

}
printf(" %d Count : %d\n",i,c);
if(c%2==0){
e++;
}

c=0;
}

printf("Output : %d",e);



    return 0;
}
