#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char c[100];
    printf("entet the string: ");
    gets(c);

    for (int i = 0; i <= 5; i++)
    {
        switch (c[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            break;

        default:
            printf("%c", c[i]);
        }
    }

    return 0;
}
