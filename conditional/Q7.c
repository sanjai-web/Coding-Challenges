#include <stdio.h>
int main()
{
    int a, c, q,i;
    san:
    printf("Enter Your Choice:\n 1.Coffee \n 2.Tea \n 3.Cold Coffee \n 4.MILK SHAKE\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("\nEnter the Quantity: ");
        scanf("%d", q);
       c = q * 10;
        printf("Total Amount: %d", c);
        break;
    case 2:
        printf("\nEnter the Quantity: ");
        scanf("%d", q);
        c = q * 5;
        printf("Total Amount: %d", &c);
        break;
    case 3:
        printf("\nEnter the Quantity: ");
        scanf("%d", q);
        c = q * 20;
        printf("Total Amount: %d", c);
        break;
    case 4:
        printf("\nEnter the Quantity: ");
        scanf("%d", q);
        c = q * 100;
        printf("Total Amount: %d", c);
        break;
    default:
        break;
    }
    printf("Do You Want to continue press 1:");
    scanf("%d",&i);
    if(i==1){
        goto san;
    }
    return 0;
}