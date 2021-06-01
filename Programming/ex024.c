#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    int x, odd, even, count;
    x = odd = even = 0;

    do
    {
        printf("\nType a number: ");
        scanf("%i", &x);
        count++;

        if ( x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    while ( x != 0 );

    printf("Numbers: %i\nEven: %i\nOdd: %i\n", count, even, odd);
    
    return 0;
}