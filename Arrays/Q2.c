#include<stdio.h>
#include<math.h>
#include <string.h>
int main()
{
    char a[10];
    printf("Enter a string: ");
    gets(a);
    printf("You entered: %s\n", a);
    printf("String Length: %d",strlen(a)); //to find the string length

}