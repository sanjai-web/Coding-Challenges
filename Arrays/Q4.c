#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[10],b[10];
    printf("Enter the first string: ");
    gets(a);
    strcpy(a,b);
    int c=strlen(a);
    printf("length : %d",strlen(a));
    printf("Reverse : %s\n",strrev(a));
    printf("String value : %s\n",a);
    if(strcmp(a,b)==0)
    {
        printf("Both strings are equal");
    }
else
{
    printf("Both strings are not equal");
}


    return 0;

}