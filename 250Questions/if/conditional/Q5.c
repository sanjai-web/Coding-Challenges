#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("Alphabet");
    }

    else if ((a >= '0' && a <= '9'))
    {
        printf("number");
    }
    
    else
    {
        printf("not a character");
    }

    return 0;
}