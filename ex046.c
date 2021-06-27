#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int count = 0;
    int vectorA[10];

    srand(time(NULL));

    printf("Hello, world.\n");

    do
    {
        for( i=0; i<10; i++)
        {
            vectorA[i] = rand() % 10 + 1;
            
            count++;
        }

    }while( count < 10);

    printf("Your vector: ");
    for (i=0; i<10; i++)
    {
        printf("%i ", vectorA[i]);

    }
    return 0;

}