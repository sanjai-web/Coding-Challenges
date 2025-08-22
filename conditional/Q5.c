#include<stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c \n",&a);

    switch (a)
    {
         case 'a':
    printf("The character is a Vowel.");
        break;
         case 'e':
    printf("The character is a Vowel.");
        break;
         case 'i':
    printf("The character is a Vowel.");
        break;
         case 'o':
    printf("The character is a Vowel.");
        break;
         case 'u':
    printf("The character is a Vowel.");
        break;
         case 'A':
    printf("The character is a Vowel.");
        break;
         case 'E':
    printf("The character is a Vowel.");
        break;
         case 'I':
    printf("The character is a Vowel.");
        break;
         case 'O':
    printf("The character is a Vowel.");
        break;
         case 'U':
    printf("The character is a Vowel.");
        break;
    
    default:
    printf("\nNot a Vowel");
        break;
    }
    return 0;
}