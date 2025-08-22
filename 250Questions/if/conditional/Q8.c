#include <stdio.h>
int main()
{

    int a;
    printf("enter the day number:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");

        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    default:
        printf("invalid day");
        break;
    }

    return 0;
}
