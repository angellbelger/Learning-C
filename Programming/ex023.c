#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    int x, y;

    printf("\nType the first number: ");
    scanf("%i", &x);
    printf("\nType the second number: ");
    scanf("%i", &y);

    if ( x > y)
    {
        printf("%i is greater than %i.\n", x, y);
    }
    if ( y > x )
    {
        printf("%i is greater than %i.\n", y, x);
    }
    if ( x == y )
    {
        printf("%i is equal to %i.\n", x, y);
    }

    return 0;
}