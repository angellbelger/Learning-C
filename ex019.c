#include <stdio.h>

int main()
{
    printf("\nHello, world.\n");

    int x;

    printf("\nType a number between 0 and 9999: ");
    scanf("%i", &x);

    printf("Unidade: %i\n", x % 10);
    printf("Dezena: %i\n", x % 100);
    printf("Centena: %i\n", x % 1000);
    printf("Milhar: %i\n", x % 10000);

    return 0;
}