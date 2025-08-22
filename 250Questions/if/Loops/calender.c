#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int a;
     printf("Enter a number: ");
     scanf("%d",&a);

     

     if(a==1 ||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("this month have a 31 days");
        for(int i=1;i<=31;i++){
            printf("%d\n",i);
        }
     }
     else if (a==4 ||a==6||a==9||a==10||a==11)
     {
        printf("this month have a 30 days");
        for(int i=1;i<=30;i++){
            printf("%d\n",i);
        }
     }
     else
     {
         printf("this month have a 28 days");
         for(int i=1;i<=28;i++){
            printf("%d\n",i);
     }
     }
    return 0;
}
