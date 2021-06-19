#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n1;
    int n2;

    n1 = rand() % 5 + 1;

    printf("\n\nI am thinking a number! Can you guess what it is? ");
    scanf("%i", &n2);
    printf("My number is %i and yours: %i\n", n1, n2);

    return 0;
}