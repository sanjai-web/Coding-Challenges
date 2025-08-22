#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){


int a,count=0,b=0,c,d,e;
printf("Enter a number: ");
scanf("%d",&a);//1250

int t=a;
int i=0;
while (t>0)
{   b=t%10;//4
    t=t/10;
    count++;
}
printf("The number of digits in %d is %d\n",a,count);
int j=0;
do
{
    d=a/100;//12
    e=a%100;//50
    e=e/10;//5

} while (j>=1);

printf("100 rs note %d\n",d);
printf("50 rs note %d\n",e);
printf("10 rs note %d\n",b);



  

    return 0;
}
