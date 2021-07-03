#include <stdio.h>

int main()
{
    float number;

    printf("\nHello, world.\n");
    printf("Type a number: ");
    scanf("%f", &number);

    if ( number == 0 )
    {
        printf("Your number %.2f is NULL.\n", number);
    }
    else if ( number > 0)
    {
        printf("Your number %.2f is POSITIVE.\n", number);
    }
    else
    {
        printf("Your number %.2f is NEGATIVE.\n", number);
    }
    
}