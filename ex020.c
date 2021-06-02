#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    int x;

    printf("\nType a number: ");
    scanf("%i", &x);

    if ( x % 2 == 0)
    {
        printf("The number %i is Even.\n", x);
    }else{
        printf("The number %i is Odd.\n", x);
    }

    return 0;
}