#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int cartelas;
    int i = 0;
    int j = 0;
    int equal = 0;
    int vectorA[10];

    srand(time(NULL));

    printf("Hello, world.\n");

    do
    {
        vectorA[i] = rand() % 100;
        equal = 0;
        for ( j=0; j<i; j++)
        {
            if ( vectorA[j] == vectorA[i])
                equal = 1;
        }
        if ( equal == 0)
            i++;
    }while( i < 10);

    printf("Your vector: ");
    for (i=0; i<10; i++)
    {
        printf("%i ", vectorA[i]);

    }
    return 0;

}