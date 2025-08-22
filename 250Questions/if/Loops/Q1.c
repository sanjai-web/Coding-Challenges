#include <stdio.h>
int main()
{

    int a, i = 5, b, c;
    printf("Enter A number: "); //12345
    scanf("%d", &a);
     printf("Reverse number: ");
    while (i >= 1)
    {
        b = a % 10; //5
        c = a / 10;  //1234
       
        printf("%d", b);
        a=c;
        i--;
         
    }

    return 0;
}
