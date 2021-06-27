#include <stdio.h>

int main()
{
    int vectorA[10];
    int i;

    for (i=0; i<10; i++)
    {
        printf("Type a %i number: ", i);
        scanf("%i", &vectorA[i]);

    }
    for (i=0; i<10; i++)
    {
        printf("%i ", vectorA[i]);
    }
    return 0;


}