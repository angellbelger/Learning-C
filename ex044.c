#include <stdio.h>

int main()
{
    int number, shift;
    int sRight, sLeft;
    printf("Type a number: ");
    scanf("%i", &number);
    printf("Shift: ");
    scanf("%i", &shift);

    sRight = number >> shift;
    sLeft = number << shift;

    printf("%i >> %i: %i\n%i << %i: %i\n", number, shift, sRight, number, shift, sLeft);

    return 0;


}