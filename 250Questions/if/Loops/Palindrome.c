#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){

char a[100],b[100];
printf("Enter a String : ");
scanf("%s",a);
strupr(a);
printf("\n A%s",a);
strcpy(b,a);
printf("\n B%s",b);

if(strcmp(a,b)==0){
    printf("\nString is palindrome");
}
else{
    printf("\nString is not palindrome");
}
    return 0;
}
