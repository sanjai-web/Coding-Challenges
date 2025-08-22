#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int a;
    printf("Enter a celisus to farnet press1 and farnet to celius press 2 ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    
    {
        float c;
        printf("enter the celisus value: ");
        scanf("%f", &c);
        printf("The farnet value is %f", c * 9 / 5 + 32);
        break;
    }
    case 2:
    {
        float f;
        printf("Enter the farenhet value:");
        scanf("%f", &f);
        printf("The celisus value is %f", (f - 32) * 5 / 9);
        break;
    }

    default:
        printf("not a actual value");
        break;
    }

    return 0;
}
