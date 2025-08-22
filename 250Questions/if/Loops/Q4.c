#include<stdio.h>
int main(){
  int a,b=0,c,d=0,e=1;
  printf("Enter a Limit: ");  //0,1,1,2,3,5,8,13,21,34,55,
  scanf("%d", &a);

  while (b<=a)
  {
    
    printf("Value : %d\n",b);

    d=b+ e;
    b=e;
    e=d;


   
   
  }

//   printf("Value : %d",b);
  

    return 0;
}
