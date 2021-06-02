#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, world.\n");

    int y, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;

    printf("Type a number to show its table: ");
    scanf("%i", &y);
    printf("\nTable of %i", y);
    printf("\n-----------------");

    x1 = y * 1;
    x2 = y * 2;
    x3 = y * 3;
    x4 = y * 4;
    x5 = y * 5;
    x6 = y * 6;
    x7 = y * 7;
    x8 = y * 8;
    x9 = y * 9;
    x10 = y * 10;

    printf("\n%i x 1 = %i", y, x1);
    printf("\n%i x 2 = %i", y, x2);
    printf("\n%i x 3 = %i", y, x3);
    printf("\n%i x 4 = %i", y, x4);
    printf("\n%i x 5 = %i", y, x5);
    printf("\n%i x 6 = %i", y, x6);
    printf("\n%i x 7 = %i", y, x7);
    printf("\n%i x 8 = %i", y, x8);
    printf("\n%i x 9 = %i", y, x9);
    printf("\n%i x 10 = %i", y, x10);

    return 0;
}