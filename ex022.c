#include <stdio.h>

int main()
{
    int year;

    printf("\nHello, world.\n");
    printf("Year: ");
    scanf("%i", &year);

    if ( year % 4 == 0 )
    {
        if ( year % 100 == 0 )
        {
            if ( year % 400 == 0 )
            {
                printf("The year %i is leap.\n", year);
            }
            else
            {
                printf("The year %i is ordinary.\n", year);
            }
        }
        else
        {
            printf("The year %i is ordinary.\n", year);
        }

    }
    else
    {
        printf("The year %i is ordinary.\n", year);
    }


    return 0;
}