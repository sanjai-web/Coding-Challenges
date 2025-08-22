#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
int nums[MAX];
int top = -1;
int c;
int n, m, min, max;
void push(int val)
{
    if (top > MAX)
    {
        printf("Array is Full");
        return;
    }
    nums[++top] = val;
}

int pop() { return nums[top--]; }

int peek()
{
    printf("%d", nums[top]);
    return nums[top];
}



int main()
{

    int j = 0;
    while (1)
    {
        printf("\n1,push:\n2:pop\n3,peek\n4.middle\n5.full "
               "array\n6.minimum\n7.maximum\n8.second maximum: \n");
        printf("Enter Your Choice : ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:

            printf("Enter the value: ");
            scanf("%d", &n);
            push(n);
            printf("value pushed\n");
            break;
        case 2:

            printf("Last value poped: ");
            // scanf("%d",n);
            pop();
            break;
        case 3:
            printf("Last value last: ");
            peek();
            break;

      

        default:
            exit(0);
        }
    }
    return 0;
}
