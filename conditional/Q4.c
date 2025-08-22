#include<stdio.h>
int main(){
char a;
printf("Enter the Character: ");
scanf("%c",&a);
if (a=='a' || a=='e' || a=='i'|| a=='o'|| a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' )
{
    printf(" \n%c is a Vowel",a);
}
else{
    printf("\n%c is a Consonant",a);
}

}