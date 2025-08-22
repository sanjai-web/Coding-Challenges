#include<stdio.h>
int main(){
  int i=1,l,a=0;
  printf("Enter Limit:");
  scanf("%d",&l);
  
  do
  {
   a+=i;

    i++;
  } while (i<=l);
  
printf("Final Value : %d",a);
    return 0;
}
