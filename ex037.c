#include <stdio.h>

int main()
{
    int number, doub;
    float thirdPart;
    printf("\nType a number: ");
    scanf("%i", &number);

    doub = number * 2;
    thirdPart = number * 1 / 3;

    printf("Your number: %i\nIts double: %i\nIts third part: %.2f\n", number, doub, thirdPart);

    return 0;
}