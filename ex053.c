#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    float number;

    printf("Type a number: ");
    scanf("%f", &number);

    if ( number > 0)
    {
        printf("Inverse of number %.2f is %.2f\n", number, ( ( 1 / number ) ));
    }
    else
    {
        printf("Opposite of number %.2f is %.2f\n", number, ( number * -1 ));
    }






    return 0;
}