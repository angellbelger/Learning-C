#include <stdio.h>

int main()
{
    int n1, n2;

    printf("\nType the first number: ");
    scanf("%i", &n1);
    printf("Type the second number: ");
    scanf("%i", &n2);

    if ( n1 > n2 )
    {
        printf("%i is greater than %i.\n", n1, n2);
    }
    else
    {
        printf("%i is greater than %i.\n", n2, n1);
    }

}