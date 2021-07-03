#include <stdio.h>

int main()
{
    int first, second, third;
    int n1, n2, n3;

    printf("\nType the first number: ");
    scanf("%i", &n1);
    printf("Type the second number: ");
    scanf("%i", &n2);
    printf("Type the third number: ");
    scanf("%i", &n3);

    if ( n1 > n2 && n1 > n3)
    {
        first = n1;

        if ( n2 > n3 )
        {
            second = n2;
            third = n3;
        }
        else
        {
            second = n3;
            third = n2;
        }
    }
    else if ( n2 > n1 && n2 > n3 )
    {
        first = n2;

        if ( n1 > n3 )
        {
            second = n1;
            third = n3;
        }
        else
        {
            second = n3;
            third = n1;
        }
    }
    else if ( n3 > n1 && n3 > n2 )
    {
        first = n3;

        if ( n2 > n1 )
        {
            second = n2;
            third = n1;
        }
        else
        {
            second = n1;
            third = n2;
        }
    }
    printf("\nFirst: %i\nSecond: %i\nThird: %i\n", first, second, third);
}